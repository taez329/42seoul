/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:17:25 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/02 13:33:53 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				idx;
	unsigned int	count;

	idx = 0;
	count = 0;
	while (*(dest + idx))
		idx++;
	while (*src && count < nb)
	{
		*(dest + idx) = *src;
		src++;
		idx++;
		count++;
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
	printf("%s\n", ft_strncat(arr, "Hello World!", 6));
	printf("%s\n", ft_strncat(arr, "World!", 0));
	printf("%s\n\n", ft_strncat(arr, "World!", 424242424));
}
*/
