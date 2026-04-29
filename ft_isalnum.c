/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhenfr <sokhenfr@learner.42.tech>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-22 13:49:33 by sokhenfr          #+#    #+#             */
/*   Updated: 2026-04-22 13:49:33 by sokhenfr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalnum(int character)
{
	if (character >= 48 && character <= 57)
		return (1);
	else if (character >= 65 && character <= 90)
		return (1);
	else if (character >= 97 && character <= 122)
		return (1);
	else
		return (0);
}
