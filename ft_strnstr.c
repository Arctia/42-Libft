/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgavioli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:57:17 by vgavioli          #+#    #+#             */
/*   Updated: 2022/01/30 15:57:21 by vgavioli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return ((char *)(s1));
	i = 0;
	j = ft_strlen(s2);
	while (i + j <= n)
	{
		if (ft_strncmp((const char *)(s1 + i), s2, j) == 0)
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
