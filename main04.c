/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 08:47:28 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/17 09:00:35 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	ft_ultimate_div_mod(int *div, int *mod);

int	main(int argc, char *argv[])
{
	int	div;
	int	mod;

	if (argc > 2)
	{
		div = atoi(argv[1]);
		mod = atoi(argv[2]);
		printf ("a:%d, b: %d\n", div, mod);
		ft_ultimate_div_mod(&div, &mod);
		printf ("div:%d, mod:%d\n", div, mod);
	}
	else
	{
		div = 20;
		mod = 5;
		printf ("a:%d, b: %d\n", div, mod);
		ft_ultimate_div_mod(&div, &mod);
		printf ("div:%d, mod:%d\n", div, mod);
	}
}
