/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:42:03 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/07 16:32:14 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>\

void	ft_print_reverse_alphabet(void)
{
	char i;

	i = 'z';
	while (i <= 'a')
	{
		ft_print_reverse_alphabet();
		i--;
	}
}
