/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/27 21:04:44 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:27:39 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dupe;
	int		i;

	dupe = (char *) malloc(str_len(src) + 1);
	i = 0;
	if (dupe == '\0')
	{
		errno = ENOMEM;
		return (0);
	}
	while (src[i])
	{
		dupe[i] = src[i];
		i++;
	}
	dupe[i] = src[i];
	return (dupe);
}
