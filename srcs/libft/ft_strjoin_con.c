/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_con.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:37:20 by yichan            #+#    #+#             */
/*   Updated: 2024/03/29 15:32:08 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_con(char const *s1, char *connector, char const *s2)
{
	char	*str;
	size_t	x;
	size_t	y;

	if (!s1 || !connector || !s2)
		return (NULL);
	str = (char *) ft_calloc(sizeof(char), \
			(ft_strlen(s1) + ft_strlen(connector) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[y])
		str[x++] = s1[y++];
	y = 0;
	while (connector[y])
		str[x++] = connector[y++];
	y = 0;
	while (s2[y])
		str[x++] = s2[y++];
	str[x] = '\0';
	return (str);
}
