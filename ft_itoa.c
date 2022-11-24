/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 07:01:42 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/24 12:01:22 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_negative(int long *n, char *c)
{
	if (*n < 0)
	{
		*n *= -1;
		*c = '-';
	}
}

char	*ft_itoa(int nb)
{
	int long	n;
	int			i;
	char		*str;

	n = nb;
	i = ft_len(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	str[0] = '0';
	if (n == 0)
		return (str);
	ft_negative(&n, &str[0]);
	while (n > 0)
	{
		str[i] = '0' + n % 10;
		n /= 10;
		i--;
	}
	return (str);
}
/*
int main()
{
	long int n = -28104497;
	char *s;
	char *p;

	//s = ft_test(n);
	p = ft_itoa(n);
	//printf("the s of test is %s\n",s);
	//printf("the len of test is  %ld\n", ft_strlen(s));
	printf("the one is %s\n",p);
	printf("the len one is  %ld\n", ft_strlen(p));
	free(p);
}*/
