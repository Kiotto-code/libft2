/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tclear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:48:51 by yichan            #+#    #+#             */
/*   Updated: 2024/05/01 17:58:18 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main()
// {
// 	getchr();
// 	ft_printf("%s", "\e[1;1H\e[2J");
// 	return (0);

// }

int	ft_tclear(void)
{
	char		c;
	size_t		bytes_read = read(STDIN_FILENO, &c, 1);

	if (bytes_read == 1)
		return (c);
	else
		return (EOF);
	printf("HERE COME THE NEW JOURNEY");
	printf("\e[1;1H\e[2J");
	return (0);
}