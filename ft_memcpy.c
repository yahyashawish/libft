/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabu-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:41:26 by yaabu-sh          #+#    #+#             */
/*   Updated: 2026/09/30 19:20:25 by yaabu-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (!dest && !src)
		return (dest);
	if (n == 0 || (dest == src))
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	while (n != 0)
	{
		if (*d != *s)
			*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

//#include <string.h>

/*int	main(void)
{
	unsigned char	dest[10];
	unsigned char	src[];
	unsigned char	src1[];

	src[] = "mhmd";
	src1[] = "zaid";
	ft_memcpy(dest, src, 5);
	printf("%s", dest);
	memcpy(dest, src, 5);
	printf("%s", dest);
}*/
