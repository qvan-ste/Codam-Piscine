/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/18 13:56:47 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:24:41 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	comparison(char *s1, char *s2, int i)
{
	if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return (1);
	if ((unsigned char)s1[i] < (unsigned char)s2[i])
		return (-1);
	else
		return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0 && s1[i] && s2[i])
	{
		if (comparison(s1, s2, i) == 1)
			return (1);
		if (comparison(s1, s2, i) == -1)
			return (-1);
		else
		{
			n--;
			i++;
		}
	}
	if (n > 0)
		return (comparison(s1, s2, i));
	return (comparison(s1, s2, i - 1));
}
