/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 15:46:48 by asfaihi           #+#    #+#             */
/*   Updated: 2019/09/05 15:01:27 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

char	*ft_strrev(char *str)
{
	char	temp;
	int		length;
	int		c;

	c = 1;
	length = ft_strlen(str);
	while (c < length)
	{
		temp = str[c - 1];
		str[c - 1] = str[length - 1];
		str[length - 1] = temp;
		c++;
		length--;
	}
	return (str);
}
