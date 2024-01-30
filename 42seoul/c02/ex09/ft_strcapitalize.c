/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 22:56:37 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/06 14:39:10 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_special(char str)
{
	if (str <= '/')
		return (1);
	else if (str >= ':' && str <= '@')
		return (1);
	else if (str >= '[' && str <= '`')
		return (1);
	else if (str >= '{' && str <= '~')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	idx;

	idx = 1;
	if (str[0] >= 'a' && str[idx] <= 'z')
		str[0] -= 32;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			if (is_special(str[idx - 1]))
				str[idx++] -= 32;
		}
		else if (str[idx] >= 'A' && str[idx] <= 'Z')
		{
			if (!(is_special(str[idx - 1])))
				str[idx++] += 32;
		}
		idx++;
	}
	return (str);
}

/*
#include<stdio.h>
int main()
{
	char s2[100];

	for (int i = 0; i < 100; i++)
		s2[i] = '#';
	ft_strcpy(s2, "salut, comMent tu vas ? 42MoTs quarante-deux; cinquante+et+un");
	printf("%s\n", ft_strcapitalize(s2));
:}
*/
