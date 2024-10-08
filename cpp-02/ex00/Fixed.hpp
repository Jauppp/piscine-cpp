/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:02:42 by cdomet-d          #+#    #+#             */
/*   Updated: 2024/09/03 15:48:48 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int raw;
	static const int exp = 8;

public:
	Fixed();
	Fixed(const Fixed &original);
	Fixed &operator=(const Fixed &original);
	int getRawBits(void) const;
	void setRawBits(int const _raw);
	~Fixed();
};

#endif