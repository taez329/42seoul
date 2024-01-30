/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:34:26 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/04 04:19:05 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			z = i;
			while (to_find[j] && str[z] && str[z] == to_find[j])
			{
				z++;
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}	
			j = 0;
		}
		i++;
	}
	return (0);
}

/*
#include<stdio.h>
int main()
{
	printf("%s", ft_strstr("", ""));
	printf("%s\n", ft_strstr("Hello World!", ""));
	printf("%s\n", ft_strstr("Hello World!", "World!"));
	printf("%s\n", ft_strstr("Hello World!", " "));
	printf("%s", ft_strstr("Hello World!", "o"));
	printf("%s\n", ft_strstr("Hello World!", "!"));
	printf("%p ", ft_strstr("Hello World!", "#"));
	printf("%p ", ft_strstr("Hello World!", "h"));
	printf("%p ", ft_strstr("Hello World!", "!#"));
	printf("%p ", ft_strstr("Hello World!", "Hello#"));
	printf("%p\n\n", ft_strstr("Hello World!", "Hello World!!"));
	printf("%p ", ft_strstr("ABCDEFCDGI", "CDH"));
	printf("%p\n\n", ft_strstr("ABCDEFCDGI", "CD"));
}
*/
