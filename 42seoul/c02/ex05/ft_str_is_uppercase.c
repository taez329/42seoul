/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:50:22 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/30 23:35:20 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	idx;

	idx = 0;
	if (str[0] == '\0')
		return (1);
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
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
	printf("%d ", ft_str_is_uppercase(""));
	printf("%d ", ft_str_is_uppercase("A"));
	printf("%d ", ft_str_is_uppercase("Z"));
	printf("%d ", ft_str_is_uppercase("A@Z"));
	printf("%d\n\n", ft_str_is_uppercase("Z[A"));
}
*/
