/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:36:25 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/18 20:12:08 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = ft_strcmp(s1, s2);
	if (i == 0)
		return (1);
	return (0);
}
