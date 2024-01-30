/* ************************************************************************** */
":w/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:56:03 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/10 18:39:05 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_ispossible_base(char *base)
{
	int	num;
	int	dup;

	num = 0;
	while (base[num] != '\0')
	{
		dup = num + 1;
		if ((base[num] >= 9 && base[num] <= 13) || base[num] == 32)
			return (0);
		if (base[num] == '+' || base[num] == '-')
			return (0);
		while (base[dup] != '\0')
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

int	ft_same_strbase(char *str, int *idx, char *base)
{
	int	num;

	num = 0;
	while (base[num] != '\0')
	{
		if (base[num] == str[*idx])
			return (num);
		num++;
	}
	return (-1);
}

int	ft_base_len(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
		len++;
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	idx;
	int	ret;
	int	sign;

	idx = 0;
	ret = 0;
	sign = 1;
	if (ft_ispossible_base(base) == 0)
		return (0);
	while (str[idx] == ' ' || (str[idx] >= 9 && str[idx] <= 13))
		idx++;
	while (str[idx] == '-' || str[idx] == '+')
	{
		if (str[idx] == '-')
			sign *= -1;
		idx++;
	}
	while (ft_same_strbase(str, &idx, base) >= 0)
	{
		ret = ret * ft_base_len(base) + ft_same_strbase(str, &idx, base);
		idx++;
	}
	return (sign * ret);
}

/*
#include<stdio.h>

int main()
{
	// Exercise 05
	printf("%d\n", ft_atoi_base("-2147483648", "0123456789"));
	printf("%d\n", ft_atoi_base("2147483647", "0123456789"));
	printf("%d\n", ft_atoi_base("0", "0123456789"));
	printf("%d\n", ft_atoi_base("20230722", "0123456789"));
	printf("%d\n\n", ft_atoi_base("-20230722", "0123456789"));

	printf("%d\n", ft_atoi_base("-10000000000000000000000000000000", "01"));
	printf("%d\n", ft_atoi_base("1111111111111111111111111111111", "01"));
	printf("%d\n", ft_atoi_base("0", "01"));
	printf("%d\n", ft_atoi_base("1001101001011001001000010", "01"));
	printf("%d\n\n", ft_atoi_base("-1001101001011001001000010", "01"));

	printf("%d\n", ft_atoi_base("-80000000", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("7FFFFFFF", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("0", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("134B242", "0123456789ABCDEF"));
	printf("%d\n\n", ft_atoi_base("-134B242", "0123456789ABCDEF"));

	printf("%d\n", ft_atoi_base("-npppppppppp", "poneyvif"));
	printf("%d\n", ft_atoi_base("offffffffff", "poneyvif"));
	printf("%d\n", ft_atoi_base("p", "poneyvif"));
	printf("%d\n", ft_atoi_base("oovoeoopn", "poneyvif"));
	printf("%d\n\n", ft_atoi_base("-oovoeoopn", "poneyvif"));

	printf("%d\n", ft_atoi_base("$**$$*$**$*$$**$**$****$*", "*$"));
	printf("%d\n", ft_atoi_base(" ---+--+1234ab567", "0123456789"));
	printf("%d\n", ft_atoi_base("\t\n\v\f\r +-+-1234z", "0123456789"));
	printf("%d\n", ft_atoi_base("\t\n\v\f\r +-+--1234z", "0123456789"));
	printf("%d\n\n", ft_atoi_base("\t\n\v\f\r +-+-+1234z", "0123456789"));

	printf("%d ", ft_atoi_base("", ""));
	printf("%d ", ft_atoi_base("*", ""));
	printf("%d ", ft_atoi_base("*$*", "*$*"));
	printf("%d ", ft_atoi_base("+$*", "$*+"));
	printf("%d ", ft_atoi_base("-$*", "$*-"));
	printf("%d ", ft_atoi_base(" $*", "$* "));
	printf("%d ", ft_atoi_base("\t$*", "$*\t"));
	printf("%d ", ft_atoi_base("\n$*", "$*\n"));
	printf("%d ", ft_atoi_base("\v$*", "$*\v"));
	printf("%d ", ft_atoi_base("\f$*", "$*\f"));
	printf("%d\n\n", ft_atoi_base("\r$*", "$*\r"));

	printf("%d ", ft_atoi_base(" \n \t -+--@abcde", "abcde"));
	return 0;
}
*/
