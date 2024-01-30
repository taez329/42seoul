/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 22:18:03 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/02 18:49:31 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	else
		return (0);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d ", ft_strcmp("Hello", "World") < 0);
	printf("%d ", ft_strcmp("World", "Hello") > 0);
	printf("%d ", ft_strcmp("Hello", "Hello") == 0);
	printf("%d ", ft_strcmp("Hello", "Hello ") < 0);
	printf("%d ", ft_strcmp("Hello ", "Hello") > 0);
	printf("%d ", ft_strcmp("", "") == 0);
	printf("%d ", ft_strcmp("", "\200") < 0);
	printf("%d\n\n", ft_strcmp("\200", " ") > 0);
}
*/
