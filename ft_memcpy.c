/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgavioli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:38:47 by vgavioli          #+#    #+#             */
/*   Updated: 2022/01/30 15:51:03 by vgavioli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t n)
{
	size_t	i;

	if (!des || des == src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(des + i) = *(const char *)(src + i);
		i++;
	}
	return (des);
}
