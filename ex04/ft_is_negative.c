/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 10:30:46 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/08 11:00:58 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char i;
	char j;

	i = 'N';
	j = 'P';
	if (n >= 0)
	{
		write(1, &j, 1);
	}
	else
	{
		write(1, &i, 1);
	}
}
