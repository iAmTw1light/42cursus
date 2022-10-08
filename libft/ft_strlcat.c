/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuebsuw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:42:39 by tsuebsuw          #+#    #+#             */
/*   Updated: 2022/02/28 15:39:15 by tsuebsuw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	srclen;

	i = 0;
	len = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (src[0] == '\0')
		return (len);
	if (dstsize > 0)
	{
		while (len + i < dstsize - 1 && src[i] != '\0')
		{
			dst[len + i] = src[i];
			i++;
		}
		while (i < dstsize && dst[i])
			i++;
		dst[len + i] = 0;
	}
	if (i > len)
		i = len;
	return (srclen + i);
}
