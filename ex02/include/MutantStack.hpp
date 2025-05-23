/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonutto <ebonutto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:57:34 by ebonutto          #+#    #+#             */
/*   Updated: 2025/05/23 17:49:11 by ebonutto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
public:
// Default Constructor and Destructor
	MutantStack( void ) : std::stack<T>() {}
	~MutantStack( void ) {}

// Copy constructor
	MutantStack( const MutantStack &other ) : std::stack<T>(other) {}

// Copy assignment operator
	MutantStack &operator=( const MutantStack &other ) {
		if ( this != &other )
			std::stack<T>::operator=( other );
		return ( *this );
	}

// Member functions
	typedef typename std::stack< T >::container_type::iterator iterator;
	typedef typename std::stack< T >::container_type::const_iterator const_iterator;
	typedef typename std::stack< T >::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack< T >::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin( void ) { return ( this->c.begin() ); }
	iterator end( void ) { return ( this->c.end() ); }

	const_iterator begin( void ) const { return ( this->c.begin() ); }
	const_iterator end( void ) const { return ( this->c.end() ); }

	reverse_iterator rbegin( void ) { return ( this->c.rbegin() ); }
	reverse_iterator rend( void ) { return ( this->c.rend() ); }

	const_reverse_iterator rbegin( void ) const { return ( this->c.rbegin() ); }
	const_reverse_iterator rend( void ) const { return ( this->c.rend() ); }	
};
