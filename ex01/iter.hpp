/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:44:46 by ysoroko           #+#    #+#             */
/*   Updated: 2021/11/29 11:22:01 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T>
void iter(T *array, int array_length, void f(T const &ref))
{
	for(int i = 0; i < array_length; i++)
		f(array[i]);
}

// HELPER FUNCTIONS:
template< typename T>
void	display(T const &t)
{
	std::cout << t << " ";
}

template< typename T>
void ft_tests(T t, int len, std::string type)
{
	std::cout << std::endl << type << std::endl;
	std::cout << "----------------------------" << std::endl;
	iter(t, len, display);
	std::cout << std::endl << std::endl;
}

#endif