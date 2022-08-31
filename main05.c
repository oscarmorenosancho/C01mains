/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:17:03 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/17 09:27:17 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	if (argc > 1)
		ft_putstr(argv[1]);
	else
		ft_putstr("Example string\n");
}
