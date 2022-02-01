/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgavioli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:55:16 by vgavioli          #+#    #+#             */
/*   Updated: 2022/01/30 15:55:21 by vgavioli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	len_1;
	size_t	len_2;
	size_t	i;
	size_t	j;

	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len_1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (len_1 + len_2))
	{
		str[i] = s2[j++];
		i++;
	}
	str[i] = 0;
	return (str);
}