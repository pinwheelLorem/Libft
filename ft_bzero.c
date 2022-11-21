/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:45:09 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/21 21:29:28 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
void	*ft_test(void *s, size_t n)
{
	while(n--)
		*((char *) s++) = 'a';
	return (s);
}
int	main()
{
	char str[50];
	strcpy(str,"hello mt namem ek");
	ft_bzero(str,3);
	printf("%s", str + 2);


}*/
