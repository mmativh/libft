/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:27:36 by mmathivh          #+#    #+#             */
/*   Updated: 2018/05/31 08:10:03 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t num)
{
	size_t	i;
	char	*temp;

	temp = (char *)b;
	i = 0;
	while (i < num)
	{
		temp[i] = 0;
		i++;
	}
	return (b);
}
