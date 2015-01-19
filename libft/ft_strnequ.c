/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 15:02:12 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/18 20:13:33 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	l;

	l = ft_strncmp(s1, s2, n);
	if (l == 0)
		return (1);
	return (0);
}
