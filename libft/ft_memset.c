/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 13:20:27 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/20 04:33:18 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*string;

	string = (char*)b;
	i = 0;
	while (i < len)
		string[i++] = (unsigned char)c;
	return ((void*)string);
}
