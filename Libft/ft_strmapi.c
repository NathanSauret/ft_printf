/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:49:01 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/23 17:10:28 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
#include <stdio.h>
char	fun(unsigned int i, char c)
{
	i = 0;
	return (c + 1);
}
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%s\n", ft_strmapi(argv[1], fun));
	}
	return (0);
}
*/
