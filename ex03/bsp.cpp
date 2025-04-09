/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:19:44 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/09 20:23:31 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

static float area(const Point& a,const Point& b, const Point& c)
{
	return std::abs(a.get_FixedX() * b.get_FixedY() + b.get_FixedX() * c.get_FixedY() + c.get_FixedX() * a.get_FixedY()
            - (a.get_FixedY() * b.get_FixedX() + b.get_FixedY() * c.get_FixedX() + c.get_FixedY() * a.get_FixedX())) / 2.0f;
}

bool bsp(const Point& a, const Point& b, const Point& c, const Point& point)
{
	float area0;
	float area1;
	float area2;
	float area3;

	area0 = area(a, b, c);
	area1 = area(point, b, c);
	area2 = area(a, point, c);
	area3 = area(a, b,point); 
	if (area0 == area1 + area2 + area3)
	{
		if (area1 == 0 || area2 == 0 || area3 == 0)
			return (false);
		return (true);
	}
	return (false);
}

