/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:19:09 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/07 21:12:57 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void) : value(0) //default constructor
{
}

Fixed::Fixed(const Fixed& other) // copy constructor
{
	this->value = other.getRawBits();
}

Fixed::Fixed(const int number){this->value = number << fractBits;}
Fixed::Fixed(const float f){this->value = roundf(f * (1 << this->fractBits));}


Fixed& Fixed::operator=(const Fixed& other) // copy assigment and sign overload
{
	if (this != &other )
		this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed(){}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const Raw){
	this->value = Raw;
}

int Fixed::toInt() const{
	return (roundf(this->value / (float)(1 << this->fractBits)));
}

float Fixed::toFloat() const{
	return ((float)this->value / (1 << fractBits));
}

std::ostream& operator<<(std::ostream& os,const Fixed& fp)
{
	os << fp.toFloat();
	return (os);
}


/*  operators overload */

// coparison operator

bool Fixed::operator>(const Fixed& other) {return this->getRawBits() > other.getRawBits();}
bool Fixed::operator<(const Fixed& other) {return this->getRawBits() < other.getRawBits();}
bool Fixed::operator<=(const Fixed& other) {return this->getRawBits() >= other.getRawBits();}
bool Fixed::operator>=(const Fixed& other) {return this->getRawBits() <= other.getRawBits();}
bool Fixed::operator==(const Fixed& other) {return this->getRawBits() == other.getRawBits();}
bool Fixed::operator!=(const Fixed& other) {return this->getRawBits() != other.getRawBits();}

// aritmeric operator
Fixed Fixed::operator+(const Fixed& other){return (Fixed(this->toFloat() + other.toFloat()));};
Fixed Fixed::operator/(const Fixed& other){return (Fixed(this->toFloat() / other.toFloat()));}
Fixed Fixed::operator-(const Fixed& other){return (Fixed(this->toFloat() - other.toFloat()));}
Fixed Fixed::operator*(const Fixed& other){return (Fixed(other.toFloat() * this->toFloat()));}

//increment / decrement overload

Fixed Fixed::operator++(){
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	this->value++;
	return (temp);
}

Fixed Fixed::operator--(){
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed temp = *this;
	this->value--;
	return (temp);
}

Fixed& Fixed::min(Fixed& other, Fixed& another){return other > another ? another : other;}
const Fixed& Fixed::min(const Fixed& other, const Fixed& another){return other.getRawBits() > another.getRawBits() ? another : other;}
const Fixed& Fixed::max(const Fixed& other, const Fixed& another){return other.getRawBits() < another.getRawBits() ? another : other;}
Fixed& Fixed::max(Fixed& other, Fixed& another){return other < another ? another : other;}
