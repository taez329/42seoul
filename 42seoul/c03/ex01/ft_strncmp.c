/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:13:20 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/02 18:50:26 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (*s1 && *s2 && count < n)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		count++;
	}
	if (count < n && (*s1 != *s2))
		return ((unsigned char)*s1 - (unsigned char)*s2);
	else
		return (0);
}

/*
#include<stdio.h>
int main()
{
	printf("%d ", ft_strncmp("Hello", "Hi", 2) < 0);
	printf("%d ", ft_strncmp("Hello", "Hi", 1) == 0);
	printf("%d ", ft_strncmp("Hello", "World", 0) == 0);
	printf("%d ", ft_strncmp("Hello^", "Hello$", 5) == 0);
	printf("%d ", ft_strncmp(" ", "\200", 1) < 0);
	printf("%d ", ft_strncmp(" ", "\200", 0) == 0);
	printf("%d ", ft_strncmp("Hello", "Hello", 424242424) == 0);
	printf("%d\n\n", ft_strncmp("Hello ", "Hello", 424242424) > 0);
}
*/
