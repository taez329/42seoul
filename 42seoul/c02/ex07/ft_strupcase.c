/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 22:01:36 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/30 22:35:09 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			str[idx] -= 32;
		}
		idx++;
	}
	return (str);
}

/*
#include<stdio.h>
int main()
{
	char s2[20];
	
	for (int i = 0; i < 20; i++)
		s2[i] = '#';
	ft_strcpy(s2, "");
	printf("%s ", ft_strupcase(s2));
	ft_strcpy(s2, "AaZz");
	printf("%s ", ft_strupcase(s2));
	ft_strcpy(s2, "AaZz@[`{AaZz");
	printf("%s\n\n", ft_strupcase(s2));
}
*/
