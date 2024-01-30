/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:09:07 by taejepar          #+#    #+#             */
/*   Updated: 2023/08/06 14:42:06 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	jdx;
	unsigned int	len;

	idx = 0;
	jdx = 0;
	len = 0;
	while (size == 0)
		return (0);
	while (src[idx] != '\0')
	{
		if (idx + 1 < size)
		{
			dest[jdx] = src[idx];
			jdx++;
		}
		len++;
		idx++;
	}
	dest[jdx] = '\0';
	return (len);
}
