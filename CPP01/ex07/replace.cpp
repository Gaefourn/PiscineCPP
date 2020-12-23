#include <string>
#include <iostream>
#include <fstream>
#include <cstring>


int replace(std::string filename, std::string outputfile, std::string find, std::string replace)
{
	std::ifstream input(filename);
	std::string buffer;
	std::string::size_type pos; // sera egal au premier caractere de l'occurence find
	
	if (input.fail())
	{
		std::cout << "File can not be opened." << std::endl;
		return -1;
	}
	std::ofstream output_file(outputfile);
	if (!(output_file))
	{
		std::cout << "Could not create the file." << std::endl;
		return -1;
	}
	while (std::getline(input, buffer))
	{
		pos = buffer.find(find);
		while (pos != std::string::npos) // => != \0;
		{
			buffer.replace(pos, find.size(), replace);
			pos = buffer.find(find, pos + replace.size());
		}
		output_file << buffer;
		if (buffer.size() > 0)
			output_file << std::endl;
	}
	input.close();
	output_file.close();
	return 0;
}

int main (int ac, char **av)
{
	if (ac != 4 )
	{
		std::cout << "Invalid number of arguments." << std::endl;
		return -1;
	} 
	if (!strlen(av[2]) || !strlen(av[3]))
	{
		std::cout << "Error, there is one empty string." << std::endl;
		return -1;
	}
	return (replace(av[1], av[1] + std::string(".replace"), av[2], av[3]));	
}