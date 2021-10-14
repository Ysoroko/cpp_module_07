/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:12:03 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 17:25:18 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template< typename T>
class Array
{
	public:
		// Constructors
		Array();
		Array( unsigned int n ) : _n(n) { _t = new T[n];}
		// Copy constructor (Deep copy)
		Array(Array const & ref) : _n(ref.size())
		{
			T	*ref_t = ref.getT();
			_t = new T[_n];
			for (int i = 0; i < n; i++)
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
			for (int i = 0; i < n; i++)
				_t[i] = ref_t[i];
			return (*this);
		}

		// [] operator
		T	operator[](int i)
		{
			if (i < 0 || i > this->_n)
				throw (std::exception);
		}
		
		// Getters:
		T 				getT( void ) const { return (_t); }
		unsigned int	size( void ) const { return (_n); }
	private:
		T				*_t;
		unsigned int	_n;
};

template< typename T >
std::ostream & operator<<(std::ostream & o, Pair< T > const & ref)
{
	std::cout << "T: " << ref.getT() << std::endl;
}

#endif