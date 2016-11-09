/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 01:23:23 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/05 04:22:34 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (0);
	i = 0;
	tab = malloc(sizeof(*tab) * (max - min));
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
