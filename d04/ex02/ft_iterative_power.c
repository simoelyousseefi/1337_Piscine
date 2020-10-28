/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:38:52 by asfaihi           #+#    #+#             */
/*   Updated: 2019/09/04 17:49:15 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int num;

	num = 1;
	if (power < 0 || power > 12)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			num = num * nb;
			power--;
		}
		return (num);
	}
}
