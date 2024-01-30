/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:46:52 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/06 18:51:05 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		ret = nb * ft_recursive_factorial(nb - 1);
	return (ret);
}

/*
#include<stdio.h>
int main() 
{
	for (int i = -2; i <= 12; ++i)
		printf("fact[%d] = %d\n", i, ft_recursive_factorial(i));
	printf("\n");
}
*/
