/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:47:41 by ysoroko           #+#    #+#             */
/*   Updated: 2021/11/29 12:18:09 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

static void	ft_tests( void )
{
	// Empty
	std::cout << std::endl << "Empty array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<int>	arr;
	try
	{
		std::cout << "Accessing element 0: " << arr[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Assigning element 4: " << std::endl;
		arr[4] = 4;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << arr << std::endl;

	// INT
	std::cout << std::endl << "Int array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<int> narr(4);
	std::cout << "Before assigning: \n" << narr << std::endl;
	narr[0] = 8;
	narr[1] = 2;
	narr[2] = -64;
	narr[3] = 248;
	std::cout << "After assigning: \n" << narr << std::endl;

	// CHAR
	std::cout << std::endl << "Char array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<char> carr(4);
	std::cout << "Before assigning: \n" << carr << std::endl;
	carr[0] = 'a';
	carr[1] = 'b';
	carr[2] = 'c';
	carr[2] = 'd';
	std::cout << "After assigning: \n" << carr << std::endl;

	// FLOAT
	std::cout << std::endl << "Float array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<float> farr(4);
	std::cout << "Before assigning: \n" << farr << std::endl;
	farr[0] = 3.14f;
	farr[1] = -48.49f;
	farr[2] = 0.0f;
	farr[3] = 22.22f;
	std::cout << "After assigning: \n" << farr << std::endl;

	// STRING
	std::cout << std::endl << "String array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<std::string> sarr(4);
	std::cout << "Before assigning: \n" << sarr << std::endl;
	sarr[0] = "First string";
	sarr[1] = "Second string";
	sarr[2] = "Third string";
	sarr[3] = "Fourth string";
	std::cout << "After assigning: \n" << sarr << std::endl;
}

int main(void)
{
	ft_tests();
	system("leaks ex02");
	return (0);
}