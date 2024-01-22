/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/17 14:58:25 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:23:35 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lower;

	i = 0;
	is_lower = 1;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			is_lower = 0;
			break ;
		}
		i++;
	}
	return (is_lower);
}
