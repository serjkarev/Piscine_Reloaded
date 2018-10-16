/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 18:38:19 by skarev            #+#    #+#             */
/*   Updated: 2018/03/23 18:37:41 by skarev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		ft_print_params(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
