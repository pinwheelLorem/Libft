/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:43:51 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/21 21:35:15 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	while (n--)
		((char *) str)[n] = (unsigned char) c;
	return (str);
}
/*
int	main()
{
	char *str;
	str = malloc(sizeof(char)*50);
	strcpy(str,"hello my name is fatima");
	ft_memset(str, '*', 10);
	printf("%s\n",str);
	free(str);}*/
