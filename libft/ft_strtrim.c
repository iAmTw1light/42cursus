/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuebsuw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:53:49 by tsuebsuw          #+#    #+#             */
/*   Updated: 2022/06/23 21:06:19 by tsuebsuw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*str;
	
	first = 0;
	last = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while(ft_strchr(set, s1[first]) && s1[first])
		first++;
	while(ft_strchr(set, s1[last - 1]) && s1[last - 1] && last > first)
		last--;
	str = (char *)malloc(sizeof(char) * (last - first + 1));
	if (str)
		ft_strlcpy(str, &s1[first], (last - first + 1));
	return(str);
}
