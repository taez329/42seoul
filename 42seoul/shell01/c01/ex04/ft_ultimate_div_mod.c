/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:57:57 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/26 22:36:21 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include<stdio.h>
int	main()
{	
	int a1, b1;

	a1 = 42, b1 = 5;
	printf("%d %d\n", a1, b1);
	ft_ultimate_div_mod(&a1, &b1);
	printf("%d %d\n\n", a1, b1);
}
*/
