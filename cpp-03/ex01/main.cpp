/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:37:20 by cdomet-d          #+#    #+#             */
/*   Updated: 2024/09/03 15:19:43 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	scavTrap laura("Laura");
	clapTrap agathe("Agathe");

	laura.guardGate();
	agathe.setDamage(5);
	while (agathe.getEnergy() > 1)
	{
		agathe.attack("Laura");
		laura.takeDamage(agathe.getDamage());
	}
	laura.beRepaired(200);
	laura.attack("Agathe");
	agathe.takeDamage(laura.getDamage());
	agathe.beRepaired(3);
	agathe.displayStats();
	laura.displayStats();
}
