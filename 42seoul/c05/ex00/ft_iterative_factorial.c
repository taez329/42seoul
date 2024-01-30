/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:37:59 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/06 18:46:30 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb > 0)
		{
			ret = ret * nb;
			nb--;
		}
	}
	return (ret);
}

/*
#include<stdio.h>
int main() {
	// Exercise 00
	for (int i = -2; i <= 12; ++i)
		printf("fact[%d] = %d\n", i, ft_iterative_factorial(i));
	printf("\n");
}
*/
