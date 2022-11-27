/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:47:41 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/27 15:43:21 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s)
		f(i++, s++);
}
/*
static void	ft_test(unsigned int i, char *s)
{
	if (i%2)
		(*s)++;
	else
		(*s)--;

}

int main()
{
	char s[100] = "hello there";
	ft_strteri(s,ft_test);
	printf("%s\n", s);
}*/
