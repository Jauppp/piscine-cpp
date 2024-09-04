/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:34:24 by cdomet-d          #+#    #+#             */
/*   Updated: 2024/09/04 13:56:12 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

/* ************************************************************************** */
/*                               ORTHODOX CLASS                               */
/* ************************************************************************** */

ScavTrap::ScavTrap(void)
{
	std::cout << "constructor called " << std::endl;
	this->setMaxHitPoint(100);
	this->setDamage(20);
	this->setEnergy(50);
	this->setHealth(100);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << B << "ScavTrap " << R << this->getName() << " has been created!" << std::endl;
	this->setMaxHitPoint(100);
	this->setDamage(20);
	this->setEnergy(50);
	this->setHealth(100);
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << B << "ScavTrap " << R << this->getName() << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "copy constructor called " << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &comp)
{
	this->setDamage(comp.getDamage());
	this->setEnergy(comp.getEnergy());
	this->setDamage(comp.getHealth());
	this->setName(comp.getName());
	this->setMaxHitPoint(comp.getMaxHitPoint());
	return *this;
}
	
/* ************************************************************************** */
/*                               METHODS                                      */
/* ************************************************************************** */
void ScavTrap::guardGate(void)
{
	std::cout << B << "ScavTrap " << R << this->getName() << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->getEnergy() > 0 && this->getHealth() > 0)
	{
		this->setEnergy(getEnergy() - 1);
		std::cout << B << "ScavTrap " << R << this->getName() << " attacks " << target << ", dealing " << this->getDamage() << " damage!" << std::endl;
	}
	else
	{
		if (this->getHealth() <= 0)
			std::cout << B << "ScavTrap " << R << this->getName() << " is dead and cannot attack" << std::endl;
		if (this->getEnergy() <= 0)
			std::cout << B << "ScavTrap " << R << this->getName() << " is exhausted and cannot attack" << std::endl;
	}
}