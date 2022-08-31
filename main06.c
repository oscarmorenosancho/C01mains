/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:30:46 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/17 09:48:55 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	int		len;
	char	*buf;

	if (argc > 1)
		buf = argv[1];
	else
		buf = "Example string";
	len = ft_strlen(buf);
	printf("string:%s,  len:%d", buf, len);
}
