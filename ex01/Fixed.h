/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:59:47 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/06 11:36:37 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <cmath>

class Fixed{

	public:
		Fixed(void);
		Fixed(const int point);
		Fixed(const float point);
		~Fixed(void);
		Fixed(const Fixed& other); // Copy Constructor;
		Fixed& operator=(const Fixed& other); // Copy Assigment and = sign overload
		int getRawBits(void) const;
		void setRawBits(int const Raw);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int nb;
		float _fbn;
		static const int fnb = 8;
};
//operation overload
std::ostream& operator<<(std::ostream &os, const Fixed& fp);
