/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_STRDUP.C                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scindiog <scindiog@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:41:35 by scindiog          #+#    #+#             */
/*   Updated: 2023/11/09 14:44:18 by scindiog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char    *str;
    char    *new_str;

    str = "dfjkljgflkd fjkdg";
    new_str = ft_strdup(str);
    printf("%s\n", new_str);
}
*/