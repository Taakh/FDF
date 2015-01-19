/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 16:55:31 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/20 20:11:20 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*mem;

	mem = (void	*)malloc(sizeof(*mem) * size);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, 0, size);
	return ((void *)mem);
}
