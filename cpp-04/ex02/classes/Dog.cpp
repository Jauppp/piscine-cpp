/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:23:19 by cdomet-d          #+#    #+#             */
/*   Updated: 2024/09/26 16:51:30 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

/* ************************************************************************** */
/*                               ORTHODOX CLASS                               */
/* ************************************************************************** */

Dog::Dog(void) : Aanimal("Dog"), brain(new Brain)
{
	std::cout << "Dog constructor called " << std::endl;
}

Dog::Dog(const Dog &copy) : Aanimal(copy)
{
	this->brain = new Brain();
	*this = copy;
	std::cout << "Dog copy constructor called " << std::endl;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog deconstructor called " << std::endl;
}

Dog &Dog::operator=(const Dog &comp)
{
	this->type = comp.type;
	*this->brain = *comp.brain;
	return *this;
}

/* ************************************************************************** */
/*                               METHODS                                      */
/* ************************************************************************** */
void Dog::makeSound(void) const
{
	std::cout << "Waf" << std::endl;
}

void Dog::fillPetArr(std::string s) const
{
	this->brain->fillArr(s);
}

void Dog::displayThoughts(void) const 
{
	std::cout << "Brain pointer adress | " << this->brain << std::endl;
	this->brain->displayArr();
}
