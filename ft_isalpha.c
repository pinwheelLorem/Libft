/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:02:33 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/19 18:39:39 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <ctype.h>
#include <stdio.h>
*/
int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
int main()
{
	char c = 'c';
	int d = '7';
	printf("%d\n", isalpha(c));
	printf("%d\n", isalpha(d));
	printf("%d\n", ft_isalpha(d));
	printf("%d\n", ft_isalpha(c));


}
*/
