/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:09:28 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/26 15:17:11 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		Brain(std::string ideas[100]);
		
		// Destructor
		~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);
		
		// Getters / Setters
		const std::string *getIdeas() const;
		
	private:
		std::string _ideas[100];
		
};

#endif