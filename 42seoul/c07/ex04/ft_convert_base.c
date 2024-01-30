/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:42:51 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/10 20:11:09 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int		ft_malloc_size(int nb, int len);
char	*ft_nb_base_to(char *str, int nb, int len, char *base_to);

int	ft_possible_base(char *base)
{
	int	num;
	int	dup;

	num = 0;
	while (base[num] != '\0')
	{
		dup = num + 1;
		if ((base[num] >= 9 && base[num] <= 13) || base[num] == 32)
			return (0);
		if (base[num] == '+' || base[num] == '-')
			return (0);
		while (base[dup] != '\0')
		{
			if (base[num] == base[dup])
				return (0);
			dup++;
		}
		num++;
	}
	if (num <= 1)
		return (0);
	else
		return (1);
}

int	ft_same_strbase(char c, char *base)
{
	int	num;

	num = 0;
	while (base[num] != '\0')
	{
		if (base[num] == c)
			return (num);
		num++;
	}
	return (-1);
}

int	ft_base_len(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
		len++;
	return (len);
}

int	ft_atoi_tobase(char	*nbr, char	*base_from)
{
	int	idx;
	int	ret;
	int	sign;
	int	len;

	idx = 0;
	ret = 0;
	sign = 1;
	len = ft_base_len(base_from);
	while (nbr[idx] == ' ' || (nbr[idx] >= 9 && nbr[idx] <= 13))
		idx++;
	while (nbr[idx] == '-' || nbr[idx] == '+')
	{
		if (nbr[idx] == '-')
			sign *= -1;
		idx++;
	}
	while (ft_same_strbase(nbr[idx], base_from) >= 0)
	{
		ret = ret * len + ft_same_strbase(nbr[idx], base_from);
		idx++;
	}
	return (sign * ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int		nb;
	int					size;
	int					i;
	int					len;
	char				*str;

	i = 0;
	if (ft_possible_base(base_from) == 0 || ft_possible_base(base_to) == 0)
		return (0);
	nb = ft_atoi_tobase(nbr, base_from);
	len = ft_base_len(base_to);
	size = ft_malloc_size(nb, len);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str = ft_nb_base_to(str, nb, len, base_to);
	return (str);
}
