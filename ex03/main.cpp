/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:20:25 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/09 20:35:15 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"
int main(void) {
	Point a(-3, 8);
	Point b(0, 0);
	Point c(2, -3);
	Point point(0,1); 
	Point p(-1,3); 
	Point p2(-1,4);


	std::cout << bsp(a, b, c, point) << "\n"; 
	std::cout << bsp(a, b, c, p) << "\n";
	std::cout << bsp(a, b, c,p2) << "\n";
	return (1);
}
