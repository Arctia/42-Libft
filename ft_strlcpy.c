/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgavioli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:05:53 by vgavioli          #+#    #+#             */
/*   Updated: 2022/01/26 16:05:58 by vgavioli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	c;

	c = 0;
	while (c < (dstsize - 1) && src[c] && dstsize != 0)
	{
		dst[c] = src[c];
		c++;
	}
	if (dstsize != 0)
		dst[c] = 0;
	return (c);
}
