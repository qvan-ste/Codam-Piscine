/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/16 17:21:56 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:23:12 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0 && src[i])
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		n--;
		i++;
	}
	return (dest);
}
