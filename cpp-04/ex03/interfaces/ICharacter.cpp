/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:08:36 by cdomet-d          #+#    #+#             */
/*   Updated: 2024/09/19 13:09:09 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include <iostream>

/* ************************************************************************** */
/*                               ORTHODOX CLASS                               */
/* ************************************************************************** */

ICharacter::ICharacter(void)
{
	std::cout << "constructor called " << std::endl;
}

ICharacter::ICharacter(const ICharacter &copy)
{
	std::cout << "copy constructor called " << std::endl;
	*this = copy;
}

ICharacter::~ICharacter(void)
{
	std::cout << "deconstructor called " << std::endl;
}

ICharacter &ICharacter::operator=(const ICharacter &comp)
{
	// copy instructions
	return *this;
}

/* ************************************************************************** */
/*                               METHODS                                      */
/* ************************************************************************** */
	
/* ************************************************************************** */
/*                               GETTERS                                      */
/* ************************************************************************** */
	
/* ************************************************************************** */
/*                               SETTERS                                      */
/* ************************************************************************** */