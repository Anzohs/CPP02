/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:00:16 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/09 01:00:35 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"


Point::Point(void): x(0), y(0){};

Point::Point(float x, float y): x(x), y(y){};

Point::Point(Point& point): x(point.get_FixedX()), y(point.get_FixedY()){};

Point Point::operator=(const Point& other){
	(void) other;
	return (*this);
};

float Point::get_FixedX(void) const {return (this->x.toFloat());}
float Point::get_FixedY(void) const {return (this->y.toFloat());}


std::ostream& operator<<(std::ostream &o, const Point &point)
{
	o << "x: " << point.get_FixedX() << " y: " << point.get_FixedY();
	return (o);
}
