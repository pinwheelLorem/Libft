/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:26:57 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/26 01:48:26 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	m;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		m = -n;
	}
	else
		m = n;
	if (m > 9)
	{
		ft_putnbr_fd(m / 10, fd);
		m %= 10;
	}
	ft_putchar_fd(m + '0', fd);
}
/*
#include <fcntl.h>
int main()
{
//	extern	FILE *fd;
//	fd =  fopen("../test.txt","w");
	int fd = open("te.txt",  O_WRONLY | O_CREAT);
	ft_putnbr_fd(-56273892, fd);

} */
