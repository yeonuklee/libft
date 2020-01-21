/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 22:27:21 by yelee             #+#    #+#             */
/*   Updated: 2020/01/21 12:28:05 by yelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	if (!(*s1))
		return (s2);
	if (!(*s2))
		return (s1);
	len = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	ptr = ft_strnew(len);
	if (!ptr)
		return (NULL);
	ptr = ft_strcpy(ptr, (char*)s1);
	return (ft_strcat(ptr, (char*)s2));
}
