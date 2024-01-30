/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:53:35 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/31 18:13:35 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
			idx++;
		else if (str[idx] >= 'A' && str[idx] <= 'Z')
			idx++;
		else
			return (0);
	}
	return (1);
}

/*
#include<stdio.h>
int main()
{
	printf("%d ", ft_str_is_alpha(""));
	printf("%d ", ft_str_is_alpha("A"));
	printf("%d ", ft_str_is_alpha("a"));
	printf("%d ", ft_str_is_alpha("Z"));
	printf("%d ", ft_str_is_alpha("z"));
	printf("%d ", ft_str_is_alpha("A@a"));
	printf("%d ", ft_str_is_alpha("z[Z"));
	printf("%d ", ft_str_is_alpha("A`a"));
	printf("%d\n\n", ft_str_is_alpha("z{Z"));

	char test1[] = "Hello";
    printf("input : Hello result : %d\n\n", ft_str_is_alpha(test1));
    char test2[] = "42Hello";
    printf("input : 42Hello result : %d\n\n", ft_str_is_alpha(test2));
    char test3[] = "";
    printf("input : empty string result : %d", ft_str_is_alpha(test3));
    printf("\n\n------------------------------\n\n");
}
*/	
