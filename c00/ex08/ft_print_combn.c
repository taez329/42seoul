/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 22:52:22 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/26 22:16:09 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_usrecursion(int n, int num, int idx, char *ary);

void	ft_print_combn(int n)
{
	char	str[9];

	ft_print_usrecursion(n, 0, 0, str);
	return ;
}

void	ft_print_usrecursion(int n, int num, int idx, char *ary)
{
	if (n == idx)
	{
		write (1, ary, n);
		if (ary[0] != 10 - n + '0')
			write (1, ", ", 2);
		return ;
	}
	while (num <= 9)
	{
		ary[idx] = num + '0';
		num++;
		ft_print_usrecursion(n, num, idx + 1, ary);
	}
	return ;
}

/*
int main()
{
	ft_print_combn(9);
}	
*/
