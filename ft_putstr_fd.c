/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:33:45 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/26 05:06:41 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*
#include <fcntl.h>
int main()
{
//	extern	FILE *fd;
//	fd =  fopen("../test.txt","w");
	int fd = open("te.txt",  O_WRONLY | O_CREAT);
	ft_putstr_fd("hello", fd);

}*/
