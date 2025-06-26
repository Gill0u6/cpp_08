/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:12:47 by agilles           #+#    #+#             */
/*   Updated: 2025/06/26 12:26:58 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "\033[32m" << "Test vector container\n"<< "\033[0m";
	std::vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	try
	{
		std::cout << *easyfind(v, 5) << std::endl;
		std::cout << *easyfind(v, 20) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << "\033[32m" << "Test list container\n"<< "\033[0m";
	std::list<int> l;

	for (int i = 0; i < 20; i++)
	{
		l.push_back(i);
	}
	try
	{
		std::cout << *easyfind(l, 0) << std::endl;
		std::cout << *easyfind(l, 1000) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
