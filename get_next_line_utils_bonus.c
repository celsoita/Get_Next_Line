/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <cschiavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:01:20 by cschiavo          #+#    #+#             */
/*   Updated: 2023/03/25 18:42:56 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int i)

{
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	if (i == '\0')
		return ((char *)s);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*s3;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (0);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = 0;
	return (s3);
}

void	ft_bzero(void *s, size_t n)

{
	char		*pt;
	size_t		i;

	pt = s;
	i = 0;
	while (i < n)
	{
		pt[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)

{
	size_t	i;
	void	*pt;

	if (!nmemb || !size)
	{
		nmemb = 1;
		size = 1;
	}
	i = nmemb * size;
	pt = malloc(i);
	if (!pt)
		return (0);
	else
		ft_bzero(pt, i);
	return (pt);
}
