/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:19:09 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/05 19:19:11 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void) : value(0) //default constructor
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) // copy constructor
{
	std::cout << "Copy constructor called\n";
	this->value = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other) // copy assigment and sign overload
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other )
		this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed(){std::cout << "Destructor called";}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void Fixed::setRawBits(int const Raw){
	std::cout << "setRawBits member function called\n";
	this->value = Raw;
}
