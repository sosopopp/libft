/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhenfr <sokhenfr@learner.42.tech>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 11:59:29 by sokhenfr          #+#    #+#             */
/*   Updated: 2026-04-23 11:59:29 by sokhenfr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (size);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int main(void)
{
    char src[] = "salutation";
    char dest[10];
    size_t len;

    len = ft_strlcpy(dest, src, sizeof(dest));

    printf("src  = %s\n", src);
    printf("dest = %s\n", dest);
    printf("len  = %zu\n", len);

    return 0;
}*/