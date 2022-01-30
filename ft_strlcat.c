/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgavioli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:19:09 by vgavioli          #+#    #+#             */
/*   Updated: 2022/01/26 16:19:13 by vgavioli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// src and dest must be null terminated!!
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	i;
	size_t	d_size;

	c = ft_strlen(dst);
	d_size = ft_strlen(dst);
	i = 0;
	while ((c < (dstsize - d_size - 1)) && src[i])
	{
		dst[c] = src[i];
		c++;
		i++;
	}
	if (dstsize != 0)
		dst[c] = 0;
	return (c);
}
