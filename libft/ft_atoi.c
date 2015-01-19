/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:11:40 by rmangili          #+#    #+#             */
/*   Updated: 2014/12/01 13:40:27 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		resultat;
	int		neg;

	resultat = 0;
	i = 0;
	neg = 0;
	while (str[i] == ' ' || (str[i] < 14 && str[i] > 8))
		i++;
	if (str[i] == 45 || str[i] == 43)
		(str[i++] == 45) ? neg = 1 : neg;
	while (ft_isdigit(str[i]))
		resultat = resultat * 10 + str[i++] - 48;
	(neg == 1) ? resultat = resultat * -1 : resultat;
	return (resultat);
}
