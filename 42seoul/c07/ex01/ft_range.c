/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:21:48 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/09 05:46:59 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	str = (int *)malloc(sizeof(int) * (max - min));
	if (!str)
		return (0);
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}

/*
#include<stdio.h>
int main()
{
	int *p3 = ft_range(-42, 42);
	for (int i = 0; i < 84; ++i)
		printf("%d ", p3[i]);
	printf("%p ", ft_range(42, 42));
	printf("%p\n\n", ft_range(4242, 42));
}
*/
