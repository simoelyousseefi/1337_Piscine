/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:34:11 by asfaihi           #+#    #+#             */
/*   Updated: 2019/09/01 10:15:52 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_all(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (!(a == 57 && b == 56 && c == 57 && d == 57))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = 47;
	while (a++ < 57)
	{
		b = 47;
		while (b++ < 57)
		{
			c = 47;
			while (c++ < 57)
			{
				d = 47;
				while (d++ < 57)
				{
					if (a < c || (a == c && b < d))
					{
						print_all(a, b, c, d);
					}
				}
			}
		}
	}
}
