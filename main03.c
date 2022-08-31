/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:51:17 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/16 18:47:26 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf ("%d/%d=%d\n", a, b, div);
	printf ("%d mod %d=%d\n", a, b, mod);
}
