/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:22:56 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/26 17:15:28 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr_itostr(int nb)
{
	char	a[11];
	int		idx;
	int		t;
	int		lngth;

	idx = 0;
	if (nb < 0)
	{
		nb = -nb;
	}
	t = nb;
	while (t >= 10)
	{
		t = t / 10;
		idx++;
	}
	lngth = idx;
	while (idx >= 0)
	{
			a[idx] = (nb % 10) + '0';
			nb = nb / 10;
			idx--;
	}
	write (1, a, lngth + 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 0)
	{
		ft_putnbr_itostr(nb);
	}
	else if (nb == 0)
		write (1, "0", 1);
	else if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		write (1, "-", 1);
		ft_putnbr_itostr(nb);
	}
}

/*
int main() 
{
	ft_putnbr(24008);
	ft_putnbr(360000);
	ft_putnbr(0);
	ft_putnbr(-2147483648);
	ft_putnbr(9);
	ft_putnbr(2145565);
	ft_putnbr(-53);
}
*/
