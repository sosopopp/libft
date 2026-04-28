/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhenfr <sokhenfr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 19:40:44 by sokhenfr          #+#    #+#             */
/*   Updated: 2026/04/28 07:44:24 by sokhenfr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int main()
{
    printf("%d\n", ft_atoi("   --10"));
    printf("%d\n", ft_atoi("    -50"));
    printf("%d\n", ft_atoi("2147483648"));
    printf("%d\n", ft_atoi("-214748364810101025"));
    printf("\n\n");
     printf("%d\n", atoi("   --10"));
    printf("%d\n", atoi("    -50"));
    printf("%d\n", atoi("2147483648"));
    printf("%d\n", atoi("-10101025"));
}*/