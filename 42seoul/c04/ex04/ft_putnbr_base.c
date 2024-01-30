/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 04:34:02 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/10 18:57:21 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_possible_base(char *base)
{
	int	num;
	int	dup;

	num = 0;
	while (base[num])
	{
		dup = num + 1;
		if (base[num] == '+' || base[num] == '-')
			return (0);
		while (base[dup])
		{
			if (base[num] == base[dup])
				return (0);
			dup++;
		}
		num++;
	}
	if (num <= 1)
		return (0);
	else
		return (1);
}

void	ft_putnbr_base_write(unsigned int nb_r, char *base)
{
	char	a[32];
	int		idx;
	int		len;

	idx = 31;
	len = 0;
	while (base[len] != '\0')
		len++;
	while (nb_r > 0)
	{
		a[idx] = base[nb_r % len];
		nb_r = nb_r / len;
		idx--;
	}
	write (1, &a[idx + 1], 31 - idx);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb_r;

	if (ft_possible_base(base) == 0)
		return ;
	if (nbr == 0)
		write (1, &base[0], 1);
	else if (nbr < 0)
	{
		nb_r = -nbr;
		write (1, "-", 1);
		ft_putnbr_base_write(nb_r, base);
	}
	else
	{
		nb_r = nbr;
		ft_putnbr_base_write(nb_r, base);
	}
}

/*
#include<stdio.h>
int main() 
{
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(0, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(20230722, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-20230722, "0123456789");
	write(1, "\n\n", 2);

	ft_putnbr_base(-2147483648, "01");
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, "01");
	write(1, "\n", 1);
	ft_putnbr_base(0, "01");
	write(1, "\n", 1);
	ft_putnbr_base(20230722, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-20230722, "01");
	write(1, "\n\n", 2);

	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(0, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(20230722, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-20230722, "0123456789ABCDEF");
	write(1, "\n\n", 2);

	ft_putnbr_base(-2147483648, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(0, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(20230722, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(-20230722, "poneyvif");
	write(1, "\n\n", 2);

	ft_putnbr_base(20230722, "");
	ft_putnbr_base(20230722, "*");
	ft_putnbr_base(20230722, "*$*");
	ft_putnbr_base(20230722, "*$+");
	ft_putnbr_base(20230722, "*$-");
	ft_putnbr_base(20230722, "*$");
	write(1, "\n", 1);

	int nbr3 = -2147483648;
	char *base1 = "0123456789ABCDEF";

	printf("\n\n--overflow--\ninput nbr : -2147483648 \
	| base : 0123456789ABCDEF\n\n");
	printf("answer : -80000000\n\n");
	ft_putnbr_base(nbr3, base1);
}
*/
