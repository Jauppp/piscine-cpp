/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:11:51 by jauseff           #+#    #+#             */
/*   Updated: 2024/09/05 15:48:31 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

#define R "\033[0m" // reset

#define G "\x1b[32m" // clapTrap
#define B "\x1b[34m" // scavTrap
#define P "\x1b[35m" // fragTrap
#define C "\x1b[33m" // DiamondTrap

class ClapTrap
{
protected:
	std::string name;
	long int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

public:
	/*                               ORTHODOX CLASS                           */
	ClapTrap(void);
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap(void);
	ClapTrap &operator=(const ClapTrap &comp);

	/*                               METHODS                                  */
	void attack(const std::string &target);
	void beRepaired(unsigned int amount);
	void takeDamage(unsigned int amount);
};

#endif