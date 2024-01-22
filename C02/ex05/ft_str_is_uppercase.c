/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/17 14:55:24 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:23:43 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_upper;

	i = 0;
	is_upper = 1;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			is_upper = 0;
			break ;
		}
		i++;
	}
	return (is_upper);
}
