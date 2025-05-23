/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonutto <ebonutto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:07:51 by ebonutto          #+#    #+#             */
/*   Updated: 2025/05/23 16:10:58 by ebonutto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

class	Span {
private:
	std::vector<int>	_numbers;
	unsigned int		_maxSize;

public:
// Default constructor and Destructor
	Span( void );
	~Span( void );

// Constructor from unsigned int
	Span( unsigned int N );

// Copy constructor
	Span( const Span &other );

// Copy assignment operator
	Span	&operator=( const Span &other );

// Getters
	std::vector<int>	getNumbers( void ) const;
	unsigned int		getMaxSize( void ) const;

// Member functions
	void			addNumber( int nb );
	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );

	template <typename Iterator>
	void	addNumbers( Iterator begin, Iterator end ) {
		if (std::distance(begin, end) + _numbers.size() > _maxSize)
			throw std::runtime_error("Too many numbers!");
		_numbers.insert(_numbers.end(), begin, end);
	}
};
