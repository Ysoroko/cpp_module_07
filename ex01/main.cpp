/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:47:41 by ysoroko           #+#    #+#             */
/*   Updated: 2021/11/29 11:23:30 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int			iarr[4] = {0, 1, 2, 3};
	char		carr[5] = "abcd";
	float		farr[4] = {0.1f, 2.3f, 4.5f, 6.7f};
	std::string	sarr[4] = {"OK", "KO", "OO", "KK"};

	// INT
	ft_tests(iarr, 4, "INT");

	// CHAR
	ft_tests(carr, 5, "CHAR");

	// FLOAT
	ft_tests(farr, 4, "FLOAT");

	// STRING
	ft_tests(sarr, 4, "STRING");
	return (0);
}