/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/17 14:33:43 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:23:27 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_num;

	i = 0;
	is_num = 1;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			is_num = 0;
			break ;
		}
		i++;
	}
	return (is_num);
}
