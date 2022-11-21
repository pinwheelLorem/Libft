/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:27:21 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/19 19:53:03 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
	char a = 'A';
	int b = 9;
	int i = '~';
	int u = '€';
	printf("for a we have: %d\n", ft_isascii(a));
	printf("for b we have: %d\n", ft_isascii(b));
	printf("for i we have: %d\n", ft_isascii(i));
	printf("for u we have: %d\n", ft_isascii(u));
}*/
