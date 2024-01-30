/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:26:09 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/30 23:34:48 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	idx;

	idx = 0;
	if (str[0] == '\0')
		return (1);
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
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
	printf("%d ", ft_str_is_lowercase(""));
	printf("%d ", ft_str_is_lowercase("a"));
	printf("%d ", ft_str_is_lowercase("z"));
	printf("%d ", ft_str_is_lowercase("a`z"));
	printf("%d\n\n", ft_str_is_lowercase("z{a"));
	printf("%d\n\n", ft_str_is_lowercase("aaaaB"));
	printf("%d\n\n", ft_str_is_lowercase("Baaaaa"));
}
*/
