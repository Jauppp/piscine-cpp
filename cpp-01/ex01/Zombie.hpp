/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:40:43 by cdomet-d          #+#    #+#             */
/*   Updated: 2024/07/25 12:52:04 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
	private:
		std::string	name;
		std::size_t	i;
	public:
		Zombie(void);
		~Zombie(void);
		void	nameZombie(std::size_t i, std::string name);
		void	announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
