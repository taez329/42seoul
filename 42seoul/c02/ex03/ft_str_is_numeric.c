/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:17:22 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/30 23:34:29 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	idx;

	idx = 0;
	if (str[0] == '\0')
		return (1);
	while (str[idx] != '\0')
	{
		if (str[idx] >= '0' && str[idx] <= '9')
			idx++;
		else
			return (0);
	}
	return (1);
}

/*
#include<stdio.h>
int main()
{
	printf("%d ", ft_str_is_numeric(""));
	printf("%d ", ft_str_is_numeric("0"));
	printf("%d ", ft_str_is_numeric("9"));
	printf("%d ", ft_str_is_numeric("0/9"));
	printf("%d\n\n", ft_str_is_numeric("9:0"));
}
*/
