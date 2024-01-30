/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:18:53 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/26 17:15:15 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_comb2(void)
{
	char	a[5];
	int		an;
	int		bn;

	an = 0;
	while (an <= 98)
	{
		a[0] = (an / 10) + '0';
		a[1] = (an % 10) + '0';
		bn = an + 1;
		while (bn <= 99)
		{
			a[3] = (bn / 10) + '0';
			a[4] = (bn % 10) + '0';
			write (1, &a[0], 1);
			write (1, &a[1], 1);
			write (1, " ", 1);
			write (1, &a[3], 1);
			write (1, &a[4], 1);
			if (an != 98 || bn != 99)
				write (1, ", ", 2);
			bn++;
		}
		an++;
	}
}

/*
int main()
{
	ft_print_comb2();
}
*/
