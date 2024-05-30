/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:31:11 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/27 17:57:50 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	ft_bzero(char *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t ft_nmemb, size_t ft_size)
{
	void	*ptr;
	size_t	total_size;

	if (ft_nmemb == 0 || ft_size == 0)
		return (malloc(0));
	total_size = ft_nmemb * ft_size;
	if (total_size / ft_size != ft_nmemb)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	*ptr1;
	int	*ptr2;

	if (argc == 3)
	{
		ptr1 = ft_calloc(atoi(argv[1]), atoi(argv[2]));
		for (int i=0; i<atoi(argv[1])*atoi(argv[2]); i++)
			printf("%d, ", ptr1[i]);
		printf("\n");

		ptr2 = calloc(atoi(argv[1]), atoi(argv[2]));
		for (int i=0; i<atoi(argv[1])*atoi(argv[2]); i++)
			printf("%d, ", ptr2[i]);

		free(ptr1);
		free(ptr2);
	}
	return (0);
}
*/
