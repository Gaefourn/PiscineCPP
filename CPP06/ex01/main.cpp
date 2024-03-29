#include <iostream>
#include <sstream>
#include "Data.hpp"

void *serialize(void)
{
	const char rand[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *addr = new char[16 + sizeof(int)];
	char c;
	for (int i = 0; i < 8; i++)
	{
		c = rand[std::rand() % 62];
		addr[i] = c;
	}
	int n = std::rand() % 2147483647;
	addr[8] = n;
	for (int i = 9; i <= 16; i++)
	{
		c = rand[std::rand() % 62];
		addr[i] = c;
	}
	return (void*)addr;
}


Data * deserialize(void * raw)
{
	Data *data = new Data;
	char *addr = reinterpret_cast<char*>(raw);
	
	for (int i = 0; i < 8; i++)
		data->s1 += addr[i];
	data->n = *reinterpret_cast<int*>(addr + 8);
	for (int i = 9; i <= 16; i++)
		data->s2 += addr[i];

	return data;
}

int main()
{
	std::srand(time(0));
	void *serial = serialize();
	Data *data = new Data();
	
	data = deserialize(serial);
	
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	
	delete data;
	
	return 0;
}