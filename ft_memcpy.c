/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:53:32 by rakhsas           #+#    #+#             */
/*   Updated: 2022/10/13 19:05:11 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	unsigned char *s1;
	unsigned char *s2;

	i = 0;
	s1 = (void *)dst;
	s2 = (void *)src;
	if(!dst && !src)
		return (0);
	while (i < n)
	{
		i[s1] = i[s2];
		i++;
	}
	return ((void *)dst);
}
