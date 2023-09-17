/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:24:59 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/17 19:28:40 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	int total;

	total = 1;
	while(nb > 1)
	{
		total *=  nb;
		nb--;
	}
	return (total);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(6));
}