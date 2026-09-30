/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabu-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:34:03 by yaabu-sh          #+#    #+#             */
/*   Updated: 2026/09/28 18:45:13 by yaabu-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && (big[i + j] != '\0')
			&& (big[i + j] == little[j]))
		{
			if (little[j + 1] == '\0')
				return (&big[i]);
			++j;
		}
		++i;
	}
	return (0);
}

/*int	main(void)
{
	char *str = "hello world";
	char *to_find = "world";
	char *result = ft_strstr(str, to_find,11);
	if(result != NULL)
	printf("%s\n",result);
	else
	printf("not found");


}*/
