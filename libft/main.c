/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuebsuw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:57:16 by tsuebsuw          #+#    #+#             */
/*   Updated: 2022/03/17 16:50:12 by tsuebsuw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main (void)
{
	char * s = ft_strjoin("tripouille", "42");
	printf("%s\n",s);
	printf("%d\n",strcmp(s, "tripouille42"));
}



