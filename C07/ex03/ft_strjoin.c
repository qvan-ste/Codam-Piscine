/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/31 13:18:15 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:28:19 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_str_size(char **strs, int size)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < size)
	{
		n += str_len(strs[i]);
		i++;
	}
	return (n);
}

char	*ft_strcpy(char *dest, char *src, int *j)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[*j] = src[i];
		i++;
		*j = *j + 1;
	}
	return (dest);
}

char	*empty(void)
{
	char	*str;

	str = (char *) malloc(sizeof(char));
	*str = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		sep_size;
	int		str_size;
	char	*join;

	i = 0;
	j = 0;
	str_size = ft_str_size(strs, size);
	sep_size = str_len(sep);
	join = (char *) malloc(((sep_size * (size - 1)) + str_size + 1));
	if (size == 0)
		return (empty());
	while (i < size)
	{
		ft_strcpy(join, strs[i], &j);
		if (i < (size -1))
			ft_strcpy(join, sep, &j);
		i++;
	}
	join[j] = '\0';
	return (join);
}
