/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:32:06 by asfaihi           #+#    #+#             */
/*   Updated: 2019/09/08 11:58:36 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;

	a = argc - 1;
	while (a > 0)
	{
		while (*argv[a] != '\0')
		{
			ft_putchar(*argv[a]);
			argv[a]++;
		}
		a--;
		ft_putchar('\n');
	}
	return (0);
}
