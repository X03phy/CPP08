/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonutto <ebonutto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:07:54 by ebonutto          #+#    #+#             */
/*   Updated: 2025/05/23 16:55:50 by ebonutto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }

int main()
{
	Span sp = Span(15000);
	std::cout << "size: " << sp.getNumbers().size() << std::endl;
	for (int i = 0; i < 10000; i++)
	{
		try {
			sp.addNumber(std::rand());
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "size: " << sp.getNumbers().size() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector<int> numbers(5000, -42);
	sp.addNumbers(numbers.begin(), numbers.end());
	std::cout << "size: " << sp.getNumbers().size() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try {
		sp.addNumbers(numbers.begin(), numbers.end());
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// std::vector<int>::iterator it;
	// for (it = sp.getNumbers().begin(); it != sp.getNumbers().end(); ++it )
	// 	std::cout << *it << std::endl;
	return 0;
}
