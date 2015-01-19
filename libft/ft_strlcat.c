/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 04:28:35 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/25 09:12:28 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	a;
	int				b;

	a = 0;
	b = 0;
	len = ft_strlen(dst) + ft_strlen((char *)src);
	while (dst[a] != '\0' && a < size)
		a++;
	if (a == size)
		return (ft_strlen((char *)src) + size);
	while (src[b] != '\0' && a < size - 1)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (len);
}
