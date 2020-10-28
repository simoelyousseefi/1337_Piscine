/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 11:25:00 by asfaihi           #+#    #+#             */
/*   Updated: 2019/09/07 16:05:13 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (c <= (nb / c))
	{
		if ((nb % c) == 0)
			return (0);
		c++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int	a;

	a = 0;
	while (a < 1)
	{
		a = ft_is_prime(nb);
		if (a == 0)
			nb++;
		else if (a == 1)
			return (nb);
	}
	return (nb);
}
