/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:22:33 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/03 15:58:26 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */

Harl::Harl(void)
{
}

Harl::~Harl()
{
}



void Harl::complain(std::string level)
{
    void (Harl::*msgFunc[])(void) 
        = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    std::string msgTypes[] = {"debug", "info", "warning", "error"};
    for (int i = 0; i < 4; i++)
    {
        if (msgTypes[i] == level)
        {
            (this->*msgFunc[i])();
            return ;
        }
    }
    std::cout << "Unknown message type" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "[debug]" << std::endl << GREEN << "This is a debug message" << RESET << std::endl;
}

void Harl::info(void)
{
    std::cout << "[info]" << std::endl << BLUE << "This is a info message" << RESET << std::endl;
}
void Harl::warning(void)
{
    std::cout << "[warning]" << std::endl << YELLOW << "This is a warning message" << RESET << std::endl;
}
void Harl::error(void)
{
    std::cout << "[error]" << std::endl << RED << "This is an error message" << RESET << std::endl;
}


