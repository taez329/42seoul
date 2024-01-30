/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:41:51 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/26 22:36:34 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include<stdio.h>
int	main()
{
	int a1 = 3, b1 = 7;
		printf("%d %d\n", a1, b1);
		ft_swap(&a1, &b1);
		printf("%d %d", a1, b1);
}
*/
