/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:30:12 by pbillett          #+#    #+#             */
/*   Updated: 2015/11/27 15:53:23 by pbillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, char *s2, size_t n)
{
	int i;
	int s;

	i = 0;
	s = 0;
	while (s1[i] != '\0')
		i++;
	while ((s2[s] != '\0') && (s < (int)n))
	{
		s1[i] = s2[s];
		i++;
		s++;
	}
	s1[i] = '\0';
	return (s1);
}
