/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul <muabdul@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 16:40:28 by muabdul           #+#    #+#             */
/*   Updated: 2026/10/27 18:35:41 by muabdul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab [start] = tab [end];
		tab [end] = temp;
		start++;
		end--;
	}
}

/*int	main(void)
{
	int	string[] = {0, 1, 2};
	int	size;
	int	i;

	i = 0;
	size = 3;
	ft_rev_int_tab(string, size);
	while (i < size)
	{
		printf("%d", string[i]);
		i++;
	}
	return (0);
}*/
