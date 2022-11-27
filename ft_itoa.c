/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 07:01:42 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/27 19:03:22 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0 && n > -2147483648)
	{
		len++;
		n *= -1;
	}
	else if (n == 0)
		return (1);
	else if (n == -2147483648)
		return (11);
	while (n >= 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_negative(int *n, unsigned int *j, int *sign)
{
	if (*n < 0)
	{
		*j = (*n) * -1;
		*sign = 1;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	int				sign;
	unsigned int	j;

	sign = 0;
	j = n;
	i = 1;
	str = (char *)malloc(sizeof(char) * ft_len(n) + 1);
	if (!str)
		return (NULL);
	ft_negative(&n, &j, &sign);
	str[0] = '0';
	while (j >= 1)
	{
		str[ft_len(n) - i++] = (j % 10) + '0';
		j /= 10;
	}
	if (sign)
		*str = '-';
	str[ft_len(n)] = '\0';
	return (str);
}
/*
int main()
{
	long int n = -9;
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
