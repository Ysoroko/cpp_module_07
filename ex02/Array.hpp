/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:12:03 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 18:03:04 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T>
class Array
{
	public:
		// Constructors
		Array( )
		{
			_n = 0;
			_t = NULL;
		}
		Array( unsigned int n ) : _n(n) { _t = new T[n];}
		// Copy constructor (Deep copy)
		Array(Array const & ref) : _n(ref.size())
		{
			T	*ref_t = ref.getT();
			_t = new T[_n];
			for (int i = 0; i < _n; i++)
				_t[i] = ref_t[i];
		}

		// Destructor
		~Array()
		{
			delete [] this->_t;
		}

		// = operator
		Array & operator=(Array const & ref)
		{
			T	*ref_t = ref.getT();
			this->_n = ref.size();
			delete [] this->_t;
			this->_t = new T[_n];
			for (int i = 0; i < _n; i++)
				_t[i] = ref_t[i];
			return (*this);
		}

		// [] operator
		T	& operator[](unsigned int i)
		{
			if (i < 0 || i > this->_n)
				throw (std::exception());
			else
				return (*(_t + i));
		}
		
		// Getters:
		T 				*getT( void ) const { return (_t); }
		unsigned int	size( void ) const { return (_n); }
	private:
		T				*_t;
		unsigned int	_n;
};

template< typename T >
std::ostream & operator<<(std::ostream & o, Array< T > const & ref)
{
	for (unsigned int i = 0; i < ref.size(); i++)
		std::cout << "T[" << i << "] : " << (ref.getT())[i] << std::endl;
	return (o);
}

#endif