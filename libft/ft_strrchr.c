/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuebsuw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:19:07 by tsuebsuw          #+#    #+#             */
/*   Updated: 2022/02/26 16:27:27 by tsuebsuw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c > 256)
		c = c - 256;
	while (i != -1 && s[i] != c)
		i--;
	if (s[i] == c)
		return (&((char *)s)[i]);
	if (i == -1)
		return (NULL);
	return ((char *)s);
}
