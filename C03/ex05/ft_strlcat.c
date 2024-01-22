/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/19 18:45:35 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:25:21 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	if (size < i - 1)
	{
		while (src[j])
			j++;
		return (j);
	}
	while (src[j] && size > 1)
	{
		dest[i] = src[j];
		i++;
		j++;
		size--;
	}
	dest[i] = '\0';
	return (i);
}
