/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 20:13:58 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/18 20:39:24 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*news;
	int		i;
	int		tail;

	if (!s)
		return (NULL);
	if (!f)
		return (NULL);
	tail = ft_strlen((char *)s);
	news = malloc(tail * sizeof(news));
	i = 0;
	while (i < tail)
	{
		news[i] = (*f)(i, s[i]);
		i++;
	}
	return (news);
}
