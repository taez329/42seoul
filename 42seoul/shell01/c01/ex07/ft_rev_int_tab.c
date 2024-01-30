/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:38:25 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/27 03:31:38 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	a;
	int	rep;

	a = size;
	rep = 0;
	while (rep != a / 2)
	{
		temp = *(tab + rep);
		*(tab + rep) = *(tab + size - 1);
		*(tab + size - 1) = temp;
		size--;
		rep++;
	}
}

/*
#include<stdio.h>
int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
		for (int i = 0; i < 5; ++i)
			printf("%d ", arr[i]);
			printf("\n");

			ft_rev_int_tab(arr, 5);

		for (int i = 0; i < 5; ++i)
			printf("%d ", arr[i]);
			printf("\n\n");
	//odd
	int brr[4] = {1, 2, 3, 4};
		for (int i = 0; i < 4; ++i)
			printf("%d ", brr[i]);
			printf("\n");

			ft_rev_int_tab(brr, 4);

		for (int i = 0; i < 4; ++i)
			printf("%d ", brr[i]);
			printf("\n\n");
	//even
	int crr[1] = {1};
		for (int i = 0; i < 1; ++i)
			printf("%d ", crr[i]);
			printf("\n");

			ft_rev_int_tab(crr, 1);

		for (int i = 0; i < 1; ++i)
			printf("%d ", crr[i]);
			printf("\n\n");
	//one
}
*/
