/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 02:43:57 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/09 21:08:05 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	mi_n;

	i = 0;
	mi_n = min;
	if (min >= max)
		return (0);
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (0);
	while (mi_n < max)
	{
		(*range)[i] = mi_n;
		mi_n++;
		i++;
	}
	return (max - min);
}

/*
#include<stdio.h>
int main()
{
	int *p4;
	int sz = ft_ultimate_range(&p4, -42, 42);
	printf("%d ", sz);
	for (int i = 0; i < 84; ++i)
		printf("%d ", p4[i]);
	printf("%d ", ft_ultimate_range(&p4, 42, 42));
	printf("%d\n", ft_ultimate_range(&p4, 4242, 42));
	return 0;
}
*/
