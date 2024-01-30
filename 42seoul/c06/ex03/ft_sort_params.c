/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:09:38 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/09 11:13:35 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	bubble(char	*str1, char	*str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 > *str2)
			return (1);
		else if (*str1 < *str2)
			return (0);
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return (1);
	else
		return (0);
}

void	ft_print_sort(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	j = 0;
	while (j < argc - 2)
	{
		i = 1;
		while (i < argc - j - 1)
		{
			if (bubble(argv[i], argv[i + 1]))
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
	ft_print_sort(argc, argv);
	return (0);
}
