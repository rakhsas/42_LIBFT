/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:51:10 by rakhsas           #+#    #+#             */
/*   Updated: 2022/10/17 12:40:39 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_setcheck(char c, char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		i;
	int		end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = ft_strlen (s1);
	start = 0;
	while (s1[start] && ft_setcheck(s1[start], set))
		start++;
	while (end > start && ft_setcheck(s1[end - 1], set))
		end--;
	ptr = (char *)malloc(sizeof (char) * (end - start + 1));
	if (ptr == 0)
		return (NULL);
	while (start < end)
	{
		ptr[i] = s1[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
