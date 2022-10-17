/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:09:47 by rakhsas           #+#    #+#             */
/*   Updated: 2022/10/12 22:55:06 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('`'));
// 	return (0);
// }

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('`'));
// }

// int main(void)
// {
// 	printf("%d\n", ft_isdigit('1'));
// }

// int main(void)
// {
// 	printf("%d\n", ft_isprint(0));
// 	return (0);
// }

// int	main(void)
// {
// 	char	*c;

// 	c = "Hello World!!";
// 	printf("%s\n", ft_memchr(c, ' ', 12));
// 	return (0);
// }

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2 ;

// 	s1 = "Hellof";
// 	s2 = "HelloF";
// 	printf("%d\n", ft_memcmp(s1, s2, 3));
// }


// int	main(void)
// {
// 	char *s1;
// 	char *s2;

// 	s1 = "";
// 	s2 = "Hello World!!";
// 	printf("%s\n", ft_memmove(s1, s2, 3));
// }

int main(void)
{
	char *str;

	str = "hello world!!";
	printf("%zu\n", ft_strlen(str));
	return (0);
}
