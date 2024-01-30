/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:50:57 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/06 22:25:55 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	long long	i;
	long long	n_b;

	if (nb == 1)
		return (1);
	n_b = nb;
	nb = nb / 2;
	i = 1;
	while (nb > 0)
	{
		nb = nb - i;
		i++;
	}
	i--;
	if ((long long)i * (long long)i == n_b)
		return (i);
	else
		return (0);
}

/*
#include<stdio.h>
int main()
{
	for (int i = 1; i <= 10000; i *= 10)
		printf("sqrt(%d) = %d\n", i * i, ft_sqrt(i * i));
	printf("\n");

	for (int i = 1; i <= 10000; i *= 10)
		printf("sqrt(%d) = %d\n", -i * i, ft_sqrt(-i * i));
	printf("\n");

	for (int i = 2147395599; i <= 2147395601; ++i)
		printf("sqrt(%d) = %d\n", i, ft_sqrt(i));
	printf("\n");

	int x = 2147483647;
	printf("sqrt(%d) = %d\n", x, ft_sqrt(x));
	x = -2147483648;
	printf("sqrt(%d) = %d\n", x, ft_sqrt(x));
	x = 0;
	printf("sqrt(%d) = %d\n\n", x, ft_sqrt(x));

	printf("-ex05_test_case-\n\n");
	printf("input : 36\n\n");
	printf("--answer : 6 | your result : %d\n\n", ft_sqrt(2147395600));
	printf("input : 11\n\n");
	printf("--answer : 326 | your result :%d\n\n", ft_sqrt(106276));
	printf("\n\n------------------------------\n\n");
}
*/
