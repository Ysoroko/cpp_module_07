/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:59:21 by ysoroko           #+#    #+#             */
/*   Updated: 2021/11/29 12:28:42 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

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

// ---------------------------- SUBJECT MAIN -----------------------------------
// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }