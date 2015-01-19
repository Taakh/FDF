/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 13:27:02 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/30 10:39:11 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*nem1;
	unsigned char	*nem2;
	size_t			i;

	nem1 = (unsigned char *)s1;
	nem2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (nem1[i] == nem2[i])
			i++;
		else
			return (nem1[i] - nem2[i]);
	}
	return (0);
}
