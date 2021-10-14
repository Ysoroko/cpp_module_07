/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:55:47 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 16:16:11 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

// -------------------------- REQUIRED FUNCTIONS ------------------------------

template< typename T >
void swap( T & x, T & y){
	T	temp;
	temp = x;
	x = y;
	y = temp;
}

template< typename T >
T const &	mmin( T const & x, T const & y) {
	return (x<y ? x : y);
}

template< typename T >
T const &	mmax( T const & x, T const & y) {
	return (x>y ? x : y);
}

#endif