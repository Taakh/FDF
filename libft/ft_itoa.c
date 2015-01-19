/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 23:31:07 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/21 03:26:51 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_abs(int n)
{
	int		valeur_retour;

	valeur_retour = (n < 0) ? -n : n;
	return (valeur_retour);
}

char		*ft_itoa(int n)
{
	int		taille;
	int		integer;
	char	*str;

	str = NULL;
	taille = (n < 0) ? 2 : 1;
	integer = n;
	while (integer > 9 || integer < -9)
	{
		taille++;
		integer = ft_abs(integer / 10);
	}
	if ((str = (char *)malloc((taille + 1) * sizeof(*str))))
	{
		str[taille--] = '\0';
		integer = n;
		while (taille + 1)
		{
			str[taille--] = '0' + ft_abs(integer % 10);
			integer = ft_abs(integer / 10);
		}
		if (n < 0)
			str[0] = '-';
	}
	return (str);
}
