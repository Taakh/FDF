/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:01:48 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/18 20:40:09 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	if (!(s2[y]))
		return ((char *)s1);
	while (s1[i])
	{
		if (s2[y] == s1[i])
			y++;
		else if (s1[i] != s2[y])
			y = 0;
		if (!(s2[y]))
			return ((char *)s1 + i - ft_strlen((char *)s2) + 1);
		i++;
	}
	return (NULL);
}
