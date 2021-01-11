#include <iostream>
#include <sstream>
#include "Data.hpp"

void *serialize(void)
{
	const char rand[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string addr;
	std::stringstream ret;
	char c;
	for (int i = 0; i < 8; i++)
	{
		c = rand[std::rand() % 62];
		ret << c;
	}
	int n = std::rand() % 2147483647;
	ret << n;
	for (int i = 0; i < 8; i++)
	{
		c = rand[std::rand() % 62];
		ret << c;
	}
	addr += ret.str();
	return reinterpret_cast<void*>(const_cast<char*>(addr.c_str()));
}


Data * deserialize(void * raw)
{
	Data *data = new Data;
	char *addr = reinterpret_cast<char*>(raw);
	
	data->s1 = std::string (addr, 8);
	data->n = *reinterpret_cast<int*>(addr + 8);
	data->s2 = std::string (addr + 8 + sizeof(int), 8);

	return data;
}

int main(int ac, char **av)
{
	std::srand(std::time(NULL) + std::clock());
	void *serial = serialize();
	Data *data = new Data();
	
	data = deserialize(serial);
	
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	
	delete data;
	
	return 0;
}