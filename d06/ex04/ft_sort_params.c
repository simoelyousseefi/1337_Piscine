/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:23:02 by asfaihi           #+#    #+#             */
/*   Updated: 2019/09/11 16:41:51 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_letter_order(char **argv, int argc)
{
	int		a;
	int		b;
	char	*temp;

	a = 1;
	while (a < argc - 1)
	{
		b = 0;
		while (argv[a][b] == argv[a + 1][b])
			b++;
		if (argv[a][b] > argv[a + 1][b])
		{
			temp = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = temp;
			a = 0;
		}
		a++;
	}
}

void	ft_print_all(char **argv, int argc)
{
	int a;
	int b;

	if (argc > 1)
	{
		a = 1;
		while (a < argc)
		{
			b = 0;
			while (argv[a][b] != '\0')
			{
				ft_putchar(argv[a][b]);
				b++;
			}
			ft_putchar('\n');
			a++;
		}
	}
}

int		main(int argc, char **argv)
{
	ft_letter_order(argv, argc);
	ft_print_all(argv, argc);
	return (0);
}
