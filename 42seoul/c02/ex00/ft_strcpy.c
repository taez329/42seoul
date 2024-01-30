/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:02:36 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/27 20:53:18 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

/*
#include<stdio.h>
int main()
{
	char s1[20];
	printf("%s", ft_strcpy(s1, "Hello World!\n"));
	printf("%s\n", ft_strcpy(s1, ""));
}
*/
