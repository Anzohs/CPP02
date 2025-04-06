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

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed& other); // Copy Constructor;
		Fixed& operator=(const Fixed& other); // Copy Assigment and = sign overload
		int getRawBits(void) const;
		void setRawBits(int const Raw);
	private:
		int nb;
		static const int fnb = 8;
};
