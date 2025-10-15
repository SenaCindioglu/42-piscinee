/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scindiog <scindiog@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:06:45 by scindiog          #+#    #+#             */
/*   Updated: 2023/11/08 15:07:57 by scindiog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int number)
{
	unsigned int	result;

	result = 1;
	while (number > 0)
	{
		result = result * number;
		number--;
	}
	if (number < 0)
	{
		return (0);
	}
	return (result);
}
