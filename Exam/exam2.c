/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam2_aff.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyeo <eyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:53:29 by eyeo              #+#    #+#             */
/*   Updated: 2026/10/29 19:52:41 by eyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
write a programme that takes a string as an argument and displays the first 'q' character it encouters in it, followed by a newline. If no 'q' character in the string, the programme displays 'q'. If the number of parameters is not exactly 1, the programme displays 'q', followed by a newline. */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	write(1, "q", 1);
	write(1, "\n", 1);
	return (0);
}
