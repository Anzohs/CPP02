/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:59:47 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/06 20:40:05 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed{
	private:
		int value;
		static const int fractBits = 8;
	public:
		Fixed(void); //default constructor
		~Fixed(); // destructer
		Fixed(const Fixed& other); // copy constructor
		Fixed(const int number);
		Fixed(const float f);
		Fixed& operator=(const Fixed& other); // copy assigment and sign = overload
		int	getRawBits(void) const;
		void setRawBits(int const Raw);
		float toFloat(void) const;
		int toInt(void) const;
		/* operators overload */
			// comparison operator
		bool operator>(const Fixed& other);
		bool operator<(const Fixed& other);
		bool operator>=(const Fixed& other);
		bool operator<=(const Fixed& other);
		bool operator==(const Fixed& other);
		bool operator!=(const Fixed& other);
			// aritmeric operator
		Fixed operator/(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
			//increment / decrement overload
		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);
			// operator overload assigment
		static Fixed min(Fixed& other, Fixed& another);
		static const Fixed min(const Fixed& other, const Fixed& another);
		static Fixed max(Fixed& other, Fixed& another);
		static const Fixed max(const Fixed& other, const Fixed& another);

};
//operator overload
std::ostream& operator<<(std::ostream& os,const Fixed& fp);
