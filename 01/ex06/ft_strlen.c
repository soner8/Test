/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdieng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 18:09:36 by mdieng            #+#    #+#             */
/*   Updated: 2017/09/04 19:38:34 by mdieng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strlen(char *str)
{
	int nbr;
	int i;

	nbr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(nbr);
		nbr++;
	}
	return (nbr);
}
