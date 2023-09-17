/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:46:22 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/17 19:23:34 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int	nb)
{
	if (nb > 1)
	{
		nb *= ft_iterative_factorial(nb - 1);
	}
	else if(nb < 0)
		return (0);
	return (nb);
}

int main()
{
	printf("%d", ft_iterative_factorial(7));
}