/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:44:07 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/18 20:38:55 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
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
		news[i] = (*f)(s[i]);
		i++;
	}
	return (news);
}
