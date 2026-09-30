/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabu-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 19:10:45 by yaabu-sh          #+#    #+#             */
/*   Updated: 2026/09/30 19:11:56 by yaabu-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	if (p == NULL)
		return (NULL);
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)p + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{

		char str[] = "yahya zakaria ";
		char *res1 = ft_memchr(str, 'z', 11);
		//char *res2 = memchr(str, 'y', 11);
		if (res1 != NULL)
			printf("ft_memchr %ld\n", res1 - str);
		else
			printf("ft_memchr %d\n" , -1);

}*/
