/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:34:22 by rakhsas           #+#    #+#             */
/*   Updated: 2022/10/13 12:41:13 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t len)
{
	char	*src;
	char	*dst;

	dst = (char *)s1;
	src = (char *)s2;
	if (s2 == '\0' && s1 == '\0')
		return (0);
	if (dst <= src)
	{
		while (len--)
		{
			*dst++ = *src++;
		}
	}
	else
	{
		src += len;
		dst += len;
		while (len--)
		{
			*--dst = *--src;
		}
	}
	return (s1);
}
