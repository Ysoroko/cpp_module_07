/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:47:41 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 18:04:48 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

static void	ft_tests( void )
{
	// Empty
	Array<int>	arr;
	try
	{
		arr[4] = 4;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << arr << std::endl;

	// INT
	Array<int> narr(4);
	std::cout << narr << std::endl;
	narr[0] = 8;
	narr[1] = 2;
	narr[2] = -64;
	narr[3] = 248;
	std::cout << narr << std::endl;

	// CHAR
	Array<char> carr(4);
	std::cout << narr << std::endl;
	carr[0] = 'a';
	carr[1] = 'b';
	carr[2] = 'c';
	std::cout << carr << std::endl;

	// FLOAT
	Array<float> farr(4);
	std::cout << narr << std::endl;
	farr[0] = 3.14f;
	farr[1] = -48.49f;
	farr[2] = 0.0f;
	farr[3] = 22.22f;
	std::cout << carr << std::endl;

	// STRING
	Array<std::string> sarr(4);
	std::cout << narr << std::endl;
	sarr[0] = "First string";
	sarr[1] = "Second string";
	sarr[2] = "Third string";
	sarr[3] = "Fourth string";
	std::cout << carr << std::endl;
}

int main(void)
{
	ft_tests();
	system("leaks ex02");
	return (0);
}