/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:30:32 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/10 18:22:46 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	ret;

	i = 0;
	sign = 1;
	ret = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	return (sign * ret);
}

/*
#include<stdio.h>

int main() 
{
	printf("%d\n", ft_atoi(" ---+ --1234ab567"));
	printf("%d\n", ft_atoi("\t\n\v\f\r +-+-1234z"));
	printf("%d\n", ft_atoi("\t\n\v\f\r +-+--1234z"));
	printf("%d\n", ft_atoi("\t\n\v\f\r +-+-+1234z"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
	return 0;
}
*/
