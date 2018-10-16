/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 13:24:28 by skarev            #+#    #+#             */
/*   Updated: 2018/03/21 13:43:35 by skarev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 1 && nb <= 12)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0)
		return (1);
	else
		return (0);
}
