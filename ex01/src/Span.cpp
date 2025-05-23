/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonutto <ebonutto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:07:56 by ebonutto          #+#    #+#             */
/*   Updated: 2025/05/23 15:48:20 by ebonutto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Default constructor and Destructor
Span::Span( void ) : _maxSize(42) {
	_numbers.reserve(42);
}

Span::~Span( void ) {};

// Constructor from unsigned int
Span::Span( unsigned int N ) : _maxSize(N) {
	_numbers.reserve(N);
}

// Copy constructor
Span::Span( const Span &other ) : _numbers(other._numbers), _maxSize(other._maxSize) {}

// Copy assignment operator
Span	&Span::operator=( const Span &other ) {
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_numbers = other._numbers;
	}
	return (*this);
}

// Getters
std::vector<int>	Span::getNumbers( void ) const {
	return (_numbers);
}

unsigned int	Span::getMaxSize( void ) const {
	return (_maxSize);
}

// Member functions
void	Span::addNumber( int nb ) {
	if (_numbers.size() >= _maxSize)
		throw std::runtime_error("Too many numbers!");
	_numbers.push_back(nb);
}

unsigned int	Span::shortestSpan( void ) {
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough Numbers!");

	std::vector<int>	sorted(_numbers);
	std::sort(sorted.begin(), sorted.end());

	std::vector<int>	difference(sorted);
	std::adjacent_difference(sorted.begin(), sorted.end(), difference.begin());

	int	min_difference = *std::min_element(difference.begin() + 1, difference.end());
	
	return (static_cast<unsigned int>(min_difference));
}

unsigned int	Span::longestSpan( void ) {
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough Numbers!");

	int min_number = *std::min_element(_numbers.begin(), _numbers.end());
	int max_number = *std::max_element(_numbers.begin(), _numbers.end());

	return (static_cast<unsigned int>(max_number - min_number));
}
