/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:56:45 by cdomet-d          #+#    #+#             */
/*   Updated: 2024/07/10 16:24:23 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Phonebook 	Phonebook;
	std::string	user_input;

	std::cout << "Please enter a command" << std::endl;
	std::cout << "ADD: add a new contact" << std::endl;
	std::cout << "SEARCH: display existing contacts" << std::endl;
	std::cout << "EXIT: deletes phonebook and exit the program" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		std::cout << "$ ";
		getline(std::cin, user_input, '\n');
		if (user_input.compare("ADD") == 0)
			Phonebook.addNew();
		else if (user_input.compare("SEARCH") == 0)
			Phonebook.displayAll();
		else if (user_input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
