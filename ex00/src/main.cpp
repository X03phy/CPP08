/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonutto <ebonutto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:37:47 by ebonutto          #+#    #+#             */
/*   Updated: 2025/05/16 17:06:16 by ebonutto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int	main( void )
{
	std::list<int> lst;
	lst.push_back(0);
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);
	try {	
		(void)easyfind(lst, 9);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);	
}
