/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:08:41 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/16 16:39:05 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c < 65 || c > 90)
	{
		if (c < 97 || c > 122)
		{
			return (0);
		}
	}
	return (1);
}