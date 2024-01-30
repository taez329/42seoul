/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:51:00 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/27 04:15:15 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (j > 0)
	{
		while (i < j)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		i = 0;
		j--;
	}
}

/*
#include<stdio.h>
int main()
{
	int brr[10] = {4, 1, 0, 9, 7, 2, 8, 3, 5, 6};
	for (int i = 0; i < 10; ++i)
		printf("%d ", brr[i]);
	printf("\n");
	ft_sort_int_tab(brr, 10);
	for (int i = 0; i < 10; ++i)
		printf("%d ", brr[i]);
	printf("\n");
	return 0;
}
*/
