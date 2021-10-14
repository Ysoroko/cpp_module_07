/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:44:46 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 17:09:57 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T>
void iter(T *array, int array_length, T f(T))
{
	for(int i = 0; i < array_length; i++)
		array[i] = f(array[i]);
}

// HELPER FUNCTIONS:

template< typename T>
T	increment(T t)
{
	return (t + t);
}

template< typename T>
T	display(T t)
{
	std::cout << t;
	return (t);
}

template< typename T>
void ft_tests(T t, int len, std::string type)
{
	std::cout << type << std::endl;
	std::cout << "----------------------------" << std::endl;
	iter(t, len, display);
	std::cout << std::endl;
	iter(t, len, increment);
	iter(t, len, display);
	std::cout << std::endl;
	std::cout << std::endl << std::endl;
}

#endif