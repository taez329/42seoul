/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:47:27 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/30 18:46:02 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (src[idx] != '\0' && idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < n)
		dest[idx++] = '\0';
	return (dest);
}

/*
#include<stdio.h>
int main()
{
	char s1[20];

 	for (int i = 0; i < 19; ++i)
		s1[i] = '#';
		s1[19] = '\0';
	printf("%s\n", ft_strncpy(s1, "Hello World!\n", 13));
	printf("%s", ft_strncpy(s1, "Hello World!\n", 17));
	for (int i = 0; i < 20; ++i)
		printf("%d ", s1[i]);
	printf("\n\n");
}
*/
