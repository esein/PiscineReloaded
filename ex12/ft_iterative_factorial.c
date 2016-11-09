/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:19:50 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/09 00:09:28 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int count;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	count = nb;
	nb--;
	while (nb > 1)
	{
		count = count * nb;
		nb--;
	}
	return (count);
}
