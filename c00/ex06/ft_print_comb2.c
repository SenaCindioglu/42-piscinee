/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scindiog <scindiog@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:03:16 by scindiog          #+#    #+#             */
/*   Updated: 2023/10/30 17:50:18 by scindiog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	numbers[5];

	a = 0;
	numbers[2] = ' ';
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			numbers[0] = '0' + a / 10;
			numbers[1] = '0' + a % 10 ;
			numbers[3] = '0' + b / 10 ;
			numbers[4] = '0' + b % 10 ;
			write(1, numbers, 5);
			if (!(a == 98 && b == 99))
				write(1, ",  ", 2);
			b++;
		}
		a++;
	}
}
