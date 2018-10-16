/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 17:47:19 by skarev            #+#    #+#             */
/*   Updated: 2018/03/23 19:31:17 by skarev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print(int a)
{
	char buf;

	while (read(a, &buf, 1) != 0)
		write(1, &buf, 1);
	close(a);
}

int		main(int ac, char **av)
{
	int i;

	if (ac < 2)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		i = open(av[1], O_RDONLY);
		if (i > 0)
			ft_print(i);
	}
	return (0);
}
