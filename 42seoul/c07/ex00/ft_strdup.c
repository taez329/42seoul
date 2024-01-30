/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:06:21 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/11 03:18:39 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*newstr;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	newstr = (char *)malloc(sizeof(char) * (i + 1));
	if (!newstr)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/*
#include<stdio.h>

int main() 
{
	// Exercise 00
	char *p1 = "Hello World!";
	char *p2 = ft_strdup(p1);
	if (p1 == p2)
		return 0;
	printf("%s\n", p2);
	p2 = ft_strdup("");
	printf("%s\n", p2);
}
*/
