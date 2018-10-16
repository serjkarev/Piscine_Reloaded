/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:49:20 by skarev            #+#    #+#             */
/*   Updated: 2018/03/22 21:36:37 by skarev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		lang;
	int		*range;

	i = 0;
	lang = max - min;
	if (lang > 0)
	{
		range = (int *)malloc(sizeof(int) * (lang));
		while (min < max)
		{
			range[i] = min;
			i++;
			min++;
		}
		return (range);
	}
	else
		return (0);
}
