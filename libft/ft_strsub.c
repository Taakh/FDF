/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 18:06:07 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/20 20:13:19 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ptr;

	ptr = NULL;
	if (s != NULL)
	{
		i = 0;
		ptr = (char *)malloc(sizeof(ptr) * (len + 1));
		if (ptr == NULL)
			return (NULL);
		while (i < len)
		{
			ptr[i] = s[start + i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
