/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/18 13:53:09 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:24:31 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
		{
			cmp = 1;
			break ;
		}
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
		{
			cmp = -1;
			break ;
		}
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
		{
			cmp = 0;
			i++;
		}
	}
	return (cmp);
}
