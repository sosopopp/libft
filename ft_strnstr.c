/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhenfr <sokhenfr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 08:22:46 by sokhenfr          #+#    #+#             */
/*   Updated: 2026/04/29 10:38:44 by sokhenfr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *text, const char *to_find, size_t limit)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)text);
	len = ft_strlen(to_find);
	while (i < limit && text[i])
	{
		if (i + len <= limit
			&& ft_strncmp(text + i, to_find, len) == 0)
			return ((char *)text + i);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char *text = "aujourd'hui";
	const char *to_find1 = "jour";
	const char *to_find2 = "jourd";
	const char *to_find3 = "test";
	const char *empty = "";

	printf("cas 1: %s\n", ft_strnstr(text, to_find1, 11));
	printf("cas 2: %s\n", ft_strnstr(text, to_find2, 11));
	printf("cas 3: %s\n", ft_strnstr(text, to_find3, 11));

	printf("cas 4 (empty): %s\n", ft_strnstr(text, empty, 11));

	printf("cas 5 (limit trop petit): %s\n",
		ft_strnstr(text, to_find1, 4));

	return (0);
}*/