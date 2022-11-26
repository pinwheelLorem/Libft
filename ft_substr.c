/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 07:39:16 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/26 05:17:02 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
/*
int main()
{
	char const s[100] = "hello you ae hdk";
	char *f;
	f =ft_substr(s, 2,6);
	printf("the string is %s\n",f);
	free(f);


}*/
