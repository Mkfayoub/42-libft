/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:56:28 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/18 00:11:40 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*str;

	if (to == NULL && from == NULL)
		return (NULL);
	ptr = to;
	str = (unsigned char *)from;
	i = 0;
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
