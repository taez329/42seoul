/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:01:26 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/03 20:39:10 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	a[2];

	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			write (1, str, 1);
		else
		{
			write (1, "\\", 1);
			a[1] = "0123456789abcdef"[(unsigned char)*str % 16];
			a[0] = "0123456789abcdef"[(unsigned char)*str / 16];
			write (1, a, 2);
		}
		str++;
	}
}

/*
#include<stdio.h>

int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putstr_non_printable("\r\t\b\f\v\177");
	write (1, "\\", 1);
	printf("\n\n");
}
*/
