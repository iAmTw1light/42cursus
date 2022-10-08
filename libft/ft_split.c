/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuebsuw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:59:55 by tsuebsuw          #+#    #+#             */
/*   Updated: 2022/07/01 16:59:33 by tsuebsuw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	int	a;
	int	b;
	int	i;
	int	last;
	char**	split;

	i = 0;
	a = 0;
	b = 0;
	last = strlen(s); // ft_strlen
	if (!s || !c)
		return (NULL);
	while (s[i] && s[i] != c)
		i++;
	split = (char **)malloc(sizeof(char *) * 2);
	split[0] = (char *)malloc(sizeof(char) * (i + 1));
	split[1] = (char *)malloc(sizeof(char) * (last - i + 1));
	while (b <= i)
	{
		split[0][b] = s[b];
		b++;
	}
	while (b <= i)
	{
		split[1][b] = s[b + i];
		b++;
	}
		return (split);
}
