/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:47:37 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/02 18:20:05 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *arr)
{
	int	len;

	len = 0;
	while (arr[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	z;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	z = 0;
	if (i < size)
	{
		while (src[z] != '\0' && i + z + 1 < size)
		{
			dest[i + z] = src[z];
			z++;
		}
		dest[i + z] = '\0';
		return (i + j);
	}
	else
		return (j + size);
}

/*
#include<stdio.h>
int main()
{
	char arr[50];

	for (int i = 0; i < 50; ++i)
		arr[i] = '#';
	arr[0] = '\0';
	int len = ft_strlcat(arr, "", 50);
	printf("%s %d\n", arr, len);
	len = ft_strlcat(arr, "Hello ", 50);
	printf("%s %d\n", arr, len);
	len = ft_strlcat(arr, "World!", 50);
	printf("%s %d\n", arr, len);
	len = ft_strlcat(arr, "", 50);
	printf("%s %d\n", arr, len);
	len = ft_strlcat(arr, "42", 0);
	printf("%s %d\n", arr, len);
	len = ft_strlcat(arr, "42", 3);
	printf("%s %d\n", arr, len);
	len = ft_strlcat(arr, "\nHello World!", 20);
	printf("%s %d\n", arr, len);
	len = ft_strlcat(arr, "World!", 20);
	printf("%s %d\n", arr, len);
	len = ft_strlcat(arr, "\nHello World!", 42);
	printf("%s %d\n", arr, len);
	for (int i = 31; i < 42; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
*/
