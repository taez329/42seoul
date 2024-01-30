/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:09:43 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/06 19:50:43 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	ret;

	ret = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	ret += ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (ret);
}

/*
#include<stdio.h>
int main()
{
	for (int i = -2; i <= 10; ++i)
		printf("fibo[%d] = %d\n", i, ft_fibonacci(i));
	printf("\n");
}
*/
