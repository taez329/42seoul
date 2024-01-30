/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:10:58 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/02 22:18:37 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

/*
#include<stdio.h>
int main()
{
	printf("%d ", ft_strlen(""));
	printf("%d ", ft_strlen("Hello"));
	printf("%d\n\n", ft_strlen("Hello World!"));
}
*/
