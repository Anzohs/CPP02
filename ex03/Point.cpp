/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:00:16 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/08 18:15:10 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"


Point::Point(void): x(0), y(0){};

Point::Point(float x, float y): x(x), y(y){};

Point::Point(Point& point){
	*this = Point(point.get_FixedX(), point.get_FixedY());
};

Point Point::operator=(const Point& other){
	if (this == &other)
			return (*this);
	return (Point(get_FixedX(), get_FixedY()));
};

float Point::get_FixedX(void){return (this->x.toFloat());}
float Point::get_FixedY(void){return (this->y.toFloat());}
