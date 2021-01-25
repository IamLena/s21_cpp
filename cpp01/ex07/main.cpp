/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:33:34 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 02:20:10 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int error(std::string msg)
{
	std::cout << msg << std::endl;
	return (1);
}

void replace(std::ifstream &infile, std::ofstream &outfile, std::string &s1, std::string &s2)
{
	std::string line;
	size_t s1len = s1.length();
	size_t s2len = s2.length();

	while (getline (infile, line)) {
		size_t index = 0;
		while ((index = line.find(s1, index)) != std::string::npos)
		{
			line.replace(index, s1len, s2);
			index += s2len;
		}
		outfile << line << std::endl;
	}
}

int main(int argc, char **argv) {
	if (argc != 4)
		return error("./a.out filename s1 s2");

	std::ifstream infile(argv[1]);
	if (!infile.is_open())
		return error("can't read from file");

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "s1 and s2 ahould be non-empty" << std::endl;
		infile.close();
		return (1);
	}

	std::string infilename = argv[1];
	std::string filename = infilename + ".replace";
	std::ofstream outfile(filename.c_str());
	if (!outfile.is_open())
	{
		std::cout << "cant create output file" << std::endl;
		infile.close();
		return (1);
	}
	replace(infile, outfile, s1, s2);
	infile.close();
	outfile.close();
	return (0);
}
