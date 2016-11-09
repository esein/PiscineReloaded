/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:20:13 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/03 16:48:36 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int count;

	count = 1;
	if (nb <= 0)
		return (0);
	while (count * count < nb)
	{
		count++;
	}
	if (count * count == nb)
		return (count);
	else
		return (0);
}
