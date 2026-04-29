/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhenfr <sokhenfr@learner.42.tech>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-22 13:39:48 by sokhenfr          #+#    #+#             */
/*   Updated: 2026-04-22 13:39:48 by sokhenfr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int character)
{
	if (character >= 65 && character <= 90)
		return (1);
	else if (character >= 97 && character <= 122)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	printf("%d\n", ft_isalpha(250));
	printf("%d\n", ft_isalpha(200));
	printf("%d\n", ft_isalpha(0));
	printf("%d\n", ft_isalpha(12));
}*/