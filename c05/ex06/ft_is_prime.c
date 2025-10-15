/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scindiog <scindiog@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:11:10 by scindiog          #+#    #+#             */
/*   Updated: 2023/11/08 15:10:21 by scindiog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int number)
{
	int	i;

	i = 2;
	if (number <= 1)
		return (0);
	while (i <= (number / 2))
	{
		if (!(number % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
