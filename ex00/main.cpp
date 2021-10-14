/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:59:21 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 16:18:20 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"
using std::cout;
using std::endl;

// -------------------------- HELPER FUNCTIONS ------------------------------
template< typename T>
static void	ft_print_pair(T a, T b)
{
	std::cout << a << " | " <<  b << std::endl;
}

template< typename T>
static void ft_test(T a, T b, std::string type)
{

	std::cout << type << std::endl;
	std::cout << "----------------------------" << std::endl;
	
	// Swap test
	std::cout << "SWAP: " << std::endl;
	std::cout << "Before swapping: \n";
	ft_print_pair(a, b);
	std::cout << "------" << std::endl;
	swap(a, b);
	std::cout << "After swapping: \n";
	ft_print_pair(a, b);
	std::cout << std::endl;

	// Min test
	std::cout << "MIN: " << std::endl;
	std::cout << mmin(a, b) << std::endl << std::endl;

	// Max test	
	std::cout << "MAX: " << std::endl;
	std::cout << mmax(a, b) << std::endl << std::endl;
	std::cout << std::endl << std::endl;
}

// ------------------------------- MAIN -------------------------------------
int	main( void )
{
	// INT
	int			n1 = 43;
	int			n2 = -12;

	// FLOAT
	float		f1 = 0.0f;
	float		f2 = -475.14f;

	// STRING
	std::string	s1 = "Bonjour";
	std::string	s2 = "Au revoir";

	// CHAR
	char		c1 = 'a';
	char		c2 = 'b';

	// DOUBLE
	double		d1 = 4.4;
	double		d2 = 4.4;

	//---------------------------- TESTS -----------------------------------

	// INT
	ft_test(n1, n2, "int");

	// FLOAT
	ft_test(f1, f2, "float");

	// DOUBLE
	ft_test(d1, d2, "double");

	// STRING
	ft_test(s1, s2, "string");

	// CHAR
	ft_test(c1, c2, "char");

	return (0);
}