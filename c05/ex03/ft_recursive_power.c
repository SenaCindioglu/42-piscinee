/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scindiog <scindiog@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:10:02 by scindiog          #+#    #+#             */
/*   Updated: 2023/11/08 13:19:07 by scindiog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int number, int power)
{
	int	result;

	result = number;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
		return (number * ft_recursive_power(number, (power - 1)));
	return (result);
}
