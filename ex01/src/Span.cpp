/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:02:08 by agilles           #+#    #+#             */
/*   Updated: 2025/06/26 13:19:34 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span()
{
	std::cout << "Span Default Constructor called" << std::endl;
}

Span::Span(unsigned int N): _N(N)
{
	std::cout << "Span _N Constructor called" << std::endl;
}

Span::Span(const Span &cp)
{
	std::cout << "Span Copy Constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "Span Deconstructor called" << std::endl;
}

Span Span::operator=(const Span &cp)
{

}
