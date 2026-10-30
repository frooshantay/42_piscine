/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul <muabdul@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:45:53 by muabdul           #+#    #+#             */
/*   Updated: 2026/10/15 11:36:45 by muabdul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	c;

	c = 48;
	while (c < 58)
	{
		write(1, &c, 1);
		c++;
	}
}

void	ft_print_numbers2(void)
{
	int	c;

	c = 48;
	while (c <= 57)
	{
		write(1, &c, 1);
		c++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	ft_print_numbers2();
	write(1, "\n", 1);
}*/
