/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejepar <taejepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:49:16 by taejepar          #+#    #+#             */
/*   Updated: 2023/07/26 22:36:13 by taejepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include<stdio.h>
int	main()
{
	int div1 = 0, mod1 = 0;
	printf("%d %d\n", div1, mod1);
	ft_div_mod(42, 5, &div1, &mod1);
	printf("%d %d", div1, mod1);
}
*/
