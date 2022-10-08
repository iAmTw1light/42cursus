/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuebsuw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:16:16 by tsuebsuw          #+#    #+#             */
/*   Updated: 2022/02/22 13:46:59 by tsuebsuw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*buffer;
	char		*ptr1;
	const char	*ptr2;

	ptr1 = (char *)dst;
	ptr2 = (const char *)src;
	i = -1;
	buffer = malloc(sizeof(char) * len);
	if (buffer == NULL)
		return (NULL);
	while (++i < len)
		buffer[i] = ptr2[i];
	i = -1;
	while (++i < len)
		ptr1[i] = buffer[i];
	free(buffer);
	return (dst);
}
