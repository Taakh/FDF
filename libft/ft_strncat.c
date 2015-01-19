/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 18:44:29 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/12 13:21:38 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*sun;
	char		*sdeux;
	size_t		i;

	sun = s1;
	sdeux = (char *)s2;
	i = 0;
	while (*sun != '\0')
	{
		sun++;
	}
	while (*sdeux != '\0' && i < n)
	{
		*sun = *sdeux;
		sun++;
		sdeux++;
		i++;
	}
	*sun = '\0';
	return (s1);
}
