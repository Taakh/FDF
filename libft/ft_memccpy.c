/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 21:21:15 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/20 20:06:08 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dest;
	const char	*sourc;

	dest = dst;
	sourc = src;
	while (n--)
	{
		*dest++ = *sourc;
		if (*sourc == (unsigned char)c)
			return (dest);
		sourc++;
	}
	return (0);
}
