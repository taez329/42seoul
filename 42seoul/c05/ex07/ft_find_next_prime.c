/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:38:49 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/06 22:14:48 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_sqrt(int nb)
{
	int	i;

	nb = nb / 2;
	i = 1;
	while (nb > 0)
	{
		nb = nb - i;
		i++;
	}
	i--;
	return (i);
}

int	ft_isprime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	else
	{
		while (i < ft_find_sqrt(nb))
		{
			if (nb % i == 0)
				return (0);
			i += 2;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 2)
		return (2);
	if (ft_isprime(nb))
		return (nb);
	else
	{
		while (1)
		{
			if (ft_isprime(nb))
				return (nb);
			nb++;
		}
	}
	return (0);
}

/*
#include<stdio.h>
int main()
{
	int	x;

	for (int i = -5; i <= 20; ++i)
		printf("%d -> %d\n", i, ft_find_next_prime(i));
	printf("\n");
	x = -2147483648;
	printf("%d -> %d\n", x, ft_find_next_prime(x));
	x = 2147483647;
	printf("%d -> %d\n", x, ft_find_next_prime(x));
	return 0;
}
*/
