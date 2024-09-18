/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:10:42 by cdomet-d          #+#    #+#             */
/*   Updated: 2024/09/18 16:27:47 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

/* ************************************************************************** */
/*                               ORTHODOX CLASS                               */
/* ************************************************************************** */

AMateria::AMateria(void)
{
	std::cout << "CureMateria constructor called " << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "CureMateria string constructor called " << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
	std::cout << "CureMateria copy constructor called " << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "CureMateria deconstructor called " << std::endl;
}

AMateria &AMateria::operator=(const AMateria &comp)
{
	this->type = comp.type;
	return *this;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	return;
}

/* ************************************************************************** */
/*                               GETTERS                                      */
/* ************************************************************************** */
std::string const &AMateria::getType() const
{
	return this->type;
}
