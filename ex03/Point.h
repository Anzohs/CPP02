/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:16:31 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/08 21:53:41 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.h"
#include <ostream>

class Point{
		private:
				const Fixed	x;
				const Fixed	y;
		public:
				Point(void);
				Point(float x, float y);
				~Point(void);
				Point(Point& other);
				Point operator=(const Point& other);
				float get_FixedX() const;
				float get_FixedY() const;
};

std::ostream &operator<<(std::ostream &o, Point const point);
bool bsp(const Point& a, const Point& b, const Point& c, const Point& point);
