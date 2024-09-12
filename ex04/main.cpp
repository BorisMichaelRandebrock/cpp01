/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:09:31 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/12 17:12:01 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


void replaceString(std::string &buffer, const std::string &search, const std::string &replace) {
	std::string result;
	std::string::size_type pos = 0;
	std::string::size_type found;

	while ((found = buffer.find(search, pos)) != std::string::npos) {
		result.append(buffer, pos, found - pos);
        result.append(replace);
        // Move past the replaced part
        pos = found + search.length();
	}
	result.append(buffer, pos, std::string::npos);

    // Replace the content with the result
    buffer = result;
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Wrong number of arguments" << std::endl 
			<< "Please enter <filename>, <search> & <replace>" << std::endl;
		return 1;
	}
	std::string buffer;
	std::string file = argv[1];
	std::string find = argv[2];
	std::string replace = argv[3];
	std::string line;

	std::ifstream inputfile(file.c_str());
	if (!inputfile) {
		std::cerr << "Error: Could not open file " << file << std::endl;
        return 1;
	}
	while (getline(inputfile,line)) {
		buffer += line + '\n';	
	}
	inputfile.close();
	replaceString(buffer, find, replace);
	std::ofstream outputFile((file + ".replace").c_str());
	if (!outputFile) {
        std::cerr << "Error: Could not create file " << file 
			<< ".replace" << std::endl;
        return 1;
    }
    outputFile << buffer;
    outputFile.close();
	/*
	std::istringstream iss(buffer);
	while (getline(iss, line)) {
		std::cout << line << std::endl;
	}*/

	return 0;
}
