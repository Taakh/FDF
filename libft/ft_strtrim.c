/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 04:20:13 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/20 20:14:32 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

int			ft_spacetrim(char *s)
{
	size_t	i;
	size_t	espace;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	espace = i;
	if (s[i] != '\0')
	{
		i = len - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i--;
			espace++;
		}
	}
	return (len - espace);
}

char		*ft_strtrim(char const *s)
{
	char	*string;
	size_t	i;
	size_t	j;
	size_t	space_trim;

	i = 0;
	j = 0;
	space_trim = ft_spacetrim((char *)s);
	string = (char *)malloc(sizeof(*string) * (space_trim + 1));
	if (string == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (j < space_trim)
	{
		string[j] = s[i];
		j++;
		i++;
	}
	string[j] = '\0';
	return (string);
}
