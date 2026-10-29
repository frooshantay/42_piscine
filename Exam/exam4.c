/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyeo <eyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:14:15 by eyeo              #+#    #+#             */
/*   Updated: 2026/10/29 23:03:47 by eyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes an argument and displays this argument back on the standard output with exactly 3 spaces between each character, followed by a new line. If the number of argument is not 1, display only new line. */

#include <unistd.h>
 
//1
int     main(int        argc, char      *argv[])
{    
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i] != '\0')
		{
			write( 1, &argv[1][i], 1);
			write( 1, "   ", 3);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/*
//2----------------------------------------------------------------------------------------------- 

int	main(void)
{	
	char	*str = "ABCDE";
	int	i;

	i = 0;
	while (str[i] != '\0')
	{       
		write(1, &str[i], 1);
		if (str[i+1] != '\0')
		{
			write(1, "   ", 3);
		}
		i++;
	}
	return (0);
}
*/
