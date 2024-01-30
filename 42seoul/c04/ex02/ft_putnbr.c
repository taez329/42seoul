/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:21:50 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/04 06:24:43 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_nbrtoa(int nb)
{
	char	a[10];
	int		i;

	i = 9;
	while (nb > 0)
	{
		a[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	write (1, &a[i + 1], 9 - i);
}

void	ft_putnbr(int nb)
{
	if (nb > 0)
		ft_nbrtoa(nb);
	else if (nb == 0)
		write (1, "0", 1);
	else if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		nb = -nb;
		write (1, "-", 1);
		ft_nbrtoa(nb);
	}
}

/*
#include<stdio.h>
int main()
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(20230722);
	write(1, "\n", 1);
	ft_putnbr(-20230722);
	write(1, "\n\n", 2);
}
*/
