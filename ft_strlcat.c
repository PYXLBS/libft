/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:24:22 by pabertha          #+#    #+#             */
/*   Updated: 2023/06/22 22:01:54 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (d >= size)
		return (size + s);
	if (s < size - d)
	{
		ft_memcpy(dst + d, src, s + 1);
	}
	else
	{
		ft_memcpy(dst + d, src, size - d - 1);
		dst[size - 1] = '\0';
	}
	return (d + s);
}
