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

Fixed::Fixed(void): nb(0)  {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) { // Copy Constructor
	std::cout << "Copy constructor called" << std::endl;
	this->nb = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other){ // Copy assigment overload
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
			 this->setRawBits(other.getRawBits());
	return *this;
}

void Fixed::setRawBits(int const raw){
	this->nb = raw;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->nb;
}
