/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:48:46 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/09 02:42:02 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (*(dest + idx))
		idx++;
	while (*src)
	{
		*(dest + idx) = *src;
		src++;
		idx++;
	}
	*(dest + idx) = '\0';
	return (dest);
}

/*
#include<stdio.h>
int main()
{
	char arr[50];
	for (int i = 0; i < 50; ++i)
		arr[i] = '#';
	arr[0] = '\0';
	printf("%s\n", ft_strcat(arr, "Hello "));
	printf("%s\n", ft_strcat(arr, "World!"));
	printf("%s\n\n", ft_strcat(arr, ""));
}
*/
