/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:59:47 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/05 18:40:57 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed{
	private:
		int value;
		static const int fractBits = 8;
	public:
		Fixed(void); //default constructor
		~Fixed(); // destructer
		Fixed(const Fixed& other); // copy constructor
		Fixed& operator=(const Fixed& other); // copy assigment and sign = overload
		int	getRawBits(void) const;
		void setRawBits(int const Raw);
};
