/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul <muabdul@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:12:50 by muabdul           #+#    #+#             */
/*   Updated: 2026/10/27 18:24:16 by muabdul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main()
{
	int	n, n1;

	n = 42;
	n1 = 21;
	printf("before\n %d %d\n", n, n1);
	ft_swap(&n, &n1);
	printf("after\n %d %d\n", n, n1);
}*/
