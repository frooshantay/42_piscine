/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul <muabdul@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:50:18 by muabdul           #+#    #+#             */
/*   Updated: 2026/10/15 11:32:15 by muabdul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 122;
	while (c > 96)
	{
		write(1, &c, 1);
		--c;
	}
}

void	ft_print_reverse_alphabet2(void)
{
	char	c;

	c = 122;
	while (c >= 97)
	{
		write(1, &c, 1);
		--c;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	ft_print_reverse_alphabet2();
	write(1, "\n", 1);
}*/
