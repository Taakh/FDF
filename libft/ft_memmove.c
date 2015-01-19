/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 13:19:19 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/22 13:41:59 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tamp;
	char	*source;
	char	*desti;
	size_t	i;
	char	*tampon;

	source = (char *)src;
	desti = dst;
	tamp = (char *)malloc(sizeof(source) * len + 1);
	tampon = tamp;
	i = 0;
	while (i < len)
	{
		tampon[i] = source[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		desti[i] = tampon[i];
		i++;
	}
	return (dst);
}
