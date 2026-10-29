/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyeo <eyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 20:40:07 by eyeo              #+#    #+#             */
/*   Updated: 2026/10/29 19:41:40 by eyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that displays all even numbers from 0 to 10 included, followed by a newline (\n).*/

#include <unistd.h>

//1
int	ft_even_nbrs(void)
{
	int	i;
	i = 0;
	char    c;
	char newline;
	newline = '\n';

	
	while (i <= 10)//already has a limit at 10
	{
		if (i % 2 == 0 && i < 10)
		{
			c = i + '0';//must change to int before write
			write(1, &c, 1);
		}
		i++;

		if (i == 10)
		{
			write(1, "10", 2);
		}			
	}
	write(1, &newline, 1);
	return (0);
}

int	main(void)
{
	ft_even_nbrs();
	return (0);
}

//2-------------------------------------------------------------------------------------------
void	p(char	c)
{
	write(1, &c, 1);
}

void	 ft_evennbrs(void)
{
	write(1, "0", 1);
	write(1, "2", 1);
	write(1, "4", 1);
	write(1, "6", 1);
	write(1, "8", 1);
	write(1, "10", 2);
	write(1, "\n", 1);
}

int	main(void)
{
	ft_evennbrs();
}
