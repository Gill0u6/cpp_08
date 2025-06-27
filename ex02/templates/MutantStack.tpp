/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:30:30 by agilles           #+#    #+#             */
/*   Updated: 2025/06/27 14:00:58 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

 template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
	std::cout << "MutantStack Default Constructor called" << std::endl;
}

 template <typename T>
MutantStack<T>::MutantStack(MutantStack const &cp): std::stack<T>(cp)
{
	std::cout << "MutantStack Copy Constructor called" << std::endl;
}

 template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &cp)
{
	std::cout << "MutantStack Assignation operator called" << std::endl;
	if (this != &cp)
		std::stack<T>::operator=(cp);
	return (*this);
}

 template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack deconstructor called" << std::endl;
}

 template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

 template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

 template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return (std::stack<T>::c.begin());
}

 template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return (std::stack<T>::c.end());
}

 template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return (std::stack<T>::c.rbegin());
}

 template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (std::stack<T>::c.rend());
}

 template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
	return (std::stack<T>::c.rbegin());
}

 template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
	return (std::stack<T>::c.rend());
}

