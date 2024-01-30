/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 22:43:11 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/30 22:55:37 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
		{
			str[idx] += 32;
		}
		idx++;
	}
	return (str);
}

/*
#include<string.h>
#include<stdio.h>
int main()
{
	char s2[20];

	for (int i = 0; i < 20; i++)
		s2[i] = '#';
	strcpy(s2, "");
	printf("%s ", ft_strlowcase(s2));
	strcpy(s2, "AaZz");
	printf("%s ", ft_strlowcase(s2));
	strcpy(s2, "AaZz@[`{AaZz");
	printf("%s\n\n", ft_strlowcase(s2));
}
*/
