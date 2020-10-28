/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:44:28 by asfaihi           #+#    #+#             */
/*   Updated: 2019/09/12 18:53:47 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long i;
	long bn;

	bn = nb;
	i = 1;
	if (nb == 0)
		ft_putchar('0');
	else
	{
		if (nb < 0)
		{
			bn = -bn;
			ft_putchar('-');
		}
		while ((bn / (i * 10)) != 0)
		{
			i = (i * 10);
		}
		while (i != 0)
		{
			ft_putchar((bn / i) + 48);
			bn = (bn % i);
			i = (i / 10);
		}
	}
}
