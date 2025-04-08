/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:16:31 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/08 18:02:34 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.h"

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
				float get_FixedX();
				float get_FixedY();
};
