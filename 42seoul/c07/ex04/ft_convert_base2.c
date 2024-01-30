/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:43:17 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/10 19:01:36 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_malloc_size(int nb, int len)
{
	int				count;
	unsigned int	n_b;

	count = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
	{
		n_b = -nb;
		count++;
	}
	else
		n_b = nb;
	while (n_b > 0)
	{
		n_b = n_b / len;
		count++;
	}
	return (count);
}

char	*ft_nb_base_to(char *str, int nb, int len, char *base_to)
{
	unsigned int	n_b;
	int				size;
	int				i;

	size = ft_malloc_size(nb, len);
	i = 1;
	if (nb == 0)
		str[0] = base_to[0];
	if (nb < 0)
	{
		n_b = -nb;
		str[0] = '-';
	}
	else
		n_b = nb;
	while (n_b != 0 && size - i >= 0)
	{
		str[size - i] = base_to[n_b % len];
		n_b = n_b / len;
		i++;
	}
	str[size] = '\0';
	return (str);
}
