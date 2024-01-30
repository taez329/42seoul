/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:53:07 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/30 23:36:03 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	idx;

	idx = 0;
	if (str[0] == '\0')
		return (1);
	while (str[idx] != '\0')
	{
		if (str[idx] >= ' ' && str[idx] <= '~')
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
	printf("%d ", ft_str_is_printable(""));
	char s2[100];
	for (int i = 32; i < 127; ++i)
		s2[i - 32] = i;
	s2[95] = s2[96] = '\0';
	printf("%d ", ft_str_is_printable(s2));
	s2[95] = 31;
	printf("%d ", ft_str_is_printable(s2));
	s2[95] = 127;
	printf("%d\n\n", ft_str_is_printable(s2));
}
*/
