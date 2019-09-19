/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:13:44 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/14 14:30:27 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c == '\t') || (c == '\v') || (c == '\n') || (c == '\r') || (c == ' ')\
			|| (c == '\f'))
		return (1);
	else
		return (0);
}
