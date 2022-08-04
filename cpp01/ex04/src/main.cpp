/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:45:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/01 16:06:28 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <istream>
#include <fstream>

int main(int argc, char **argv)
{
    size_t          pos;
    int             s1Len;
    std::string     s1;
    std::string     s2;
    std::ifstream   file;
    std::string     fileName;
    std::ofstream   replaced;
    std::string     line;

    if (argc != 4)
    {
        std::cout << "Wrong number of arguments!" << std::endl;
        return (1);
    }
    s1 = std::string(argv[2]);
    s2 = std::string(argv[3]);
    fileName = std::string(argv[1]);
    file.open(argv[1]);
    replaced.open(std::string(fileName.append(".replace")));
    if(!file.is_open() || !replaced.is_open())
    {
        std::cout << "Unable to open file" << std::endl;
        return (2);
    }
    s1Len = s1.size();
    while (!(std::getline(file, line).fail()))
    {
        std::cout << line << std::endl;
        while ((pos = line.find(s1, 0) ) != std::string::npos)
        {
            line.erase(pos, s1Len);
            line.insert(pos, s2);
        }
        replaced << line;
        if (!file.eof())
            replaced << std::endl;
    }
    file.close();
    replaced.close();
    
    return (0);
}