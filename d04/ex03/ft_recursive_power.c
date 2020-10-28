/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:39:02 by asfaihi           #+#    #+#             */
/*   Updated: 2019/09/04 17:50:13 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0 || power > 12)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			return (nb * ft_recursive_power(nb, (power - 1)));
		}
		return (nb);
	}
}
