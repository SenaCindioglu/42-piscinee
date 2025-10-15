/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scindiog <scindiog@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:29:30 by scindiog          #+#    #+#             */
/*   Updated: 2023/11/09 14:44:25 by scindiog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	result = malloc(sizeof(int) * (i));
	if (result == NULL)
	{
		*range = NULL;
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

/*
int main(void)
{
	int	min;
	int	max;

	int	size;
	int	i;
	
	i = 0;
	min = 5;
	max = 10;
	int *tab[3]	= {};
	ft_ultimate_range(&tab[0], min, max);
	ft_ultimate_range(&tab[1], 1, 10);
	ft_ultimate_range(&tab[2], 12, 20);
	
	while (i < 5)
	{
		printf("%d,", tab[0][i]);
		i++;
	}
	i = 0;
	
	printf("\n");
	while (i < 9)
	{
		printf("%d,", tab[1][i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 8)
	{
		printf("%d,", tab[2][i]);
		i++;
	}
	printf("\n");
	
} */
