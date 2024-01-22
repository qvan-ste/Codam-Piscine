/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/20 18:03:28 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:25:39 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_length(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len ++;
		str ++;
	}
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, str_length(str));
}
