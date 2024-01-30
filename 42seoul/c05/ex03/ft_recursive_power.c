/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:58:34 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/06 19:09:24 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		if (power == 0)
			return (1);
		else
			ret = nb * ft_recursive_power(nb, power - 1);
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
			printf("(%d)^(%d) = %d\n", i, j, ft_recursive_power(i, j));
		printf("\n");
	}
}
*/
