/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:45:30 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/26 22:42:51 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	idx;
	int	count;

	idx = 0;
	count = 0;
	while (str[idx++] != '\0')
	{
		count++;
	}
	return (count);
}

/*
#include<stdio.h>
int main()
{
	int len = ft_strlen("Hello World!");
	printf("%d", len);
}
*/
