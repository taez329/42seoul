/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:38:45 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/06 21:40:40 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
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
		while (i < nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i += 2;
		}
	}
	return (1);
}

/*
#include<stdio.h>
int main()
{
	for (int i = -5; i <= 50; ++i)
		if (ft_is_prime(i))
			printf("%d ", i);
	printf("\n");

	printf("%d ", ft_is_prime(-2147483648));
	printf("%d\n\n", ft_is_prime(2147483647));
}
*/
