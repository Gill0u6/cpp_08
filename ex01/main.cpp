/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:02:16 by agilles           #+#    #+#             */
/*   Updated: 2025/06/27 12:39:47 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Span.hpp"

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cerr << "Error: Prog must be called with:\n\t";
		std::cerr << "./Span $(shuf -i 0-100000 -n 100) | Test with 10 000 random num\n";
		std::cerr << "\t./Span $(seq 0 999) | Test 1000 num in order (0 -> 999)\n";
		std::cerr << "\t./Span 2 4 865 22 256 | All arg need to be num \"\" is consider like 0\n";
		std::cerr << "All number can be changed like you want" << std::endl;
		return 1;
	}
	for (int i = 1; i < ac; i++)
	{
		int len = 0;
		while (av[i][len])
			len++;
		for (int j = 0; j < len; j++)
		{
			if (!isdigit(av[i][j]))
			{
				std::cerr << "Error: Arg need to be digit" << std::endl;
				return (1);
			}
		}
	}

	Span vec(ac - 1);
	Span vecCp(vec);
	for (int i = 1; i < ac; i++)
		vecCp.addNumber(atoi(av[i]));

	for (int i = 0; i < ac - 1; i++)
		std::cout << vecCp.getVector()[i] << std::endl;
	try
	{
		std::cout << "Shortest Span\t: "<< vecCp.shortestSpan() << std::endl;
		std::cout << "Longest Span\t: "<< vecCp.longestSpan() << std::endl;
	}
	catch (Span::NotEnougthNumberException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		vecCp.addNumber(5);
	}
	catch (Span::MaxNumberException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// To Try this modifie Span vec(ac - 1); to Span vec(ac);
	// try
	// {
	// 	std::cout << "Shortest Span\t: "<< vec.shortestSpan() << std::endl;
	// 	std::cout << "Longest Span\t: "<< vec.longestSpan() << std::endl;
	// }
	// catch (Span::NotEnougthNumberException &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
}
