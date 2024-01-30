/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:52:00 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/06 18:58:04 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			ret *= nb;
			power--;
		}
	}
	return (ret);
}

/*
#include<stdio.h>
int main()
{
	for (int i = -4; i <= 4; i += 4) 
	{
		for (int j = -2; j < 10; ++j)
			printf("(%d)^(%d) = %d\n", i, j, ft_iterative_power(i, j));
		printf("\n");
	}
}
*/
