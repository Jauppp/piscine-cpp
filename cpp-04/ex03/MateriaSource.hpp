/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:15:53 by cdomet-d          #+#    #+#             */
/*   Updated: 2024/09/19 17:48:08 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *learned[4];

public:
	/*                               ORTHODOX CLASS                           */
	MateriaSource(void);
	MateriaSource(const MateriaSource &copy);
	virtual ~MateriaSource(void);
	MateriaSource &operator=(const MateriaSource &copy);

	/*                               METHODS                                  */
	virtual void learnMateria(AMateria *m);
	virtual AMateria *createMateria(std::string const &type);
};

#endif