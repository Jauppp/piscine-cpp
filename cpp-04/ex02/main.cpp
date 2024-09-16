/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:14:47 by cdomet-d          #+#    #+#             */
/*   Updated: 2024/09/16 18:03:32 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#include <iostream>
#include <iomanip>

int main(void)
{
	{
		std::cout << "\n === MINIMUM TESTING ===" << std::endl;
		size_t size = 5;
		Aanimal *zoo[size];
		for (size_t i = 0; i < size; i++)
		{
			if (i % 2)
				zoo[i] = new Cat();
			else
				zoo[i] = new Dog();
		}

		for (size_t i = 0; i < size; i++)
		{
			std::cout << "[ " << std::setw(1) << i + 1 << " ] ";
			std::cout << zoo[i]->getType() << " | ";
			zoo[i]->makeSound();
		}

		for (size_t i = 0; i < size; i++)
			delete zoo[i];
	}

	{
		std::cout << "\n === OPERATOR=() TESTING ===" << std::endl;
		Dog *sandor = new Dog();
		Dog *gregor = new Dog();

		sandor->fillPetArr("i need to kill my sociopathic brother");
		gregor->fillPetArr("i am a sociopath");

		sandor->displayThoughts();
		gregor->displayThoughts();

		*gregor = *sandor;
		sandor->displayThoughts();
		gregor->displayThoughts();
		delete sandor;
		delete gregor;
	}

	{
		Cat *gregor = new Cat();
		gregor->fillPetArr("I am a sociopath");
		Cat *sandor = new Cat(*gregor);
		sandor->displayThoughts();
		gregor->displayThoughts();
		sandor->fillPetArr("I will kill my mad brother");
		gregor->displayThoughts();
		sandor->displayThoughts();
		delete gregor;
		delete sandor;
	}

	{
		// This is to prove that the class cannot be instiantiated, since it's abstract | Uncomment to test
		// Aanimal *aclass = new Aanimal;
		// Aanimal aclass_test;
	}
}
