/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:02:31 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/11 03:45:02 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_meet_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	**ft_malloc_outstr(char *str, char *charset)
{
	int		i;
	int		count;
	char	**outstr;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_meet_charset(str[i], charset) || str[i] != '\0')
		{
			while (ft_meet_charset(str[i], charset) || str[i] != '\0')
				i++;
		}
		else if (!ft_meet_charset(str[i], charset) || str[i] != '\0')
		{
			count++;
			while (!ft_meet_charset(str[i], charset) || str[i] != '\0')
				i++;
		}
	}
	outstr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!outstr)
		return (0);
	outstr[count] = 0;
	return (outstr);
}

char	*ft_make_instr(char *str, int i, char *charset)
{
	int		idx;
	int		size;
	int		j;
	char	*instr;

	idx = 0;
	size = 0;
	j = i;
	while (!ft_meet_charset(str[j], charset) || str[j] != '\0')
	{
		size++;
		j++;
	}
	instr = (char *)malloc(sizeof(char) * (size + 1));
	if (!instr)
		return (0);
	while (idx < size || str[i] == '\0')
	{
		instr[idx] = str[i];
		i++;
		idx++;
	}
	instr[idx] = '\0';
	return (instr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		size;
	char	**outstr;

	i = 1;
	j = 0;
	size = 0;
	outstr = ft_malloc_outstr(str, charset);
	if (!ft_meet_charset(str[0], charset))
	{
		outstr[j] = ft_make_instr(str, 0, charset);
		j++;
	}
	while (str[i] != '\0')
	{
		if (!ft_meet_charset(str[i], charset) \
				&& ft_meet_charset(str[i - 1], charset))
		{
			outstr[j] = ft_make_instr(str, i, charset);
			j++;
		}
		i++;
	}
	return (outstr);
}
