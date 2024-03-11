/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lha <aait-lha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:17:13 by aait-lha          #+#    #+#             */
/*   Updated: 2023/12/12 17:31:29 by aait-lha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*block;
	size_t		t;

	if (!count || !size || (SIZE_MAX / size) < count)
		return (NULL);
	t = count * size;
	block = malloc(t);
	if (!block)
		return (NULL);
	ft_bzero(block, size);
	return (block);
}
