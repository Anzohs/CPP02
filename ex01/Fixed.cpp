/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:19:09 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/06 11:36:52 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void) : nb(0)  {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int point)
{
	this->nb = point;
	this->_fbn = toFloat();
}

Fixed::Fixed(const float point)
{
	this->_fbn = point;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) // Copy Constructor
{ 
	std::cout << "Copy constructor called" << std::endl;
	this->nb = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other) // Copy assigment overload
{ 
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
			 this->setRawBits(other.getRawBits());
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	this->nb = raw;
}

float Fixed::toFloat(void) const{
	return ((float)(this->nb/(1 << 8)));
};

int Fixed::toInt(void) const{
	return (this->fnb >> 8);	
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->nb;
}


std::ostream& operator<<(std::ostream &os, const Fixed& fp)
{
			os << fp.toFloat();
			return (os);
}
