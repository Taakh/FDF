/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:28:10 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/20 04:37:58 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Libft.h"

char		*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char*)malloc(sizeof(char) * ft_strlen((char *)s1) + 1);
	if (s2 != NULL)
	{
		ft_strcpy (s2, s1);
	}
	else
	{
		return (NULL);
	}
	return (s2);
}
