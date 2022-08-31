/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:27:54 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/17 11:28:08 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(int argc, char *argv[])
{
	int	size;
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	i;

	size = 10;
	if (argc > 1)
	{
		size = argc - 1;
		if (size > 10)
			size = 10;
		i = 0;
		while (i < size)
		{
			tab[i] = atoi(argv[i + 1]);
			i++;
		}
	}
	ft_print_tab(tab, size);
	ft_sort_int_tab(tab, size);
	ft_print_tab(tab, size);
}
