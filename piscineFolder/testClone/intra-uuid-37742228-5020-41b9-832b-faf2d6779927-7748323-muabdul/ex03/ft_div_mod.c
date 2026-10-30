/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul <muabdul@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 22:35:32 by muabdul           #+#    #+#             */
/*   Updated: 2026/10/27 18:26:08 by muabdul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	div_x;
	int	mod_y;

	div_x = a / b;
	mod_y = a % b;
	*div = div_x;
	*mod = mod_y;
}

/*int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 22;
	b = 7;
	div = 0;
	mod = 0;

	printf("%d || %d\n", div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("%d || %d\n", div, mod);

	return (0);
}*/
