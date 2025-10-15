/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scindiog <scindiog@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:29:30 by scindiog          #+#    #+#             */
/*   Updated: 2023/11/09 18:37:44 by scindiog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = '\0';
		return (0);
	}
	i = max - min;
	result = malloc(sizeof(int) * (i));
	if (result == '\0')
	{
		*range = '\0';
		return (-1);
	}
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	*range = result;
	return (i);
}
