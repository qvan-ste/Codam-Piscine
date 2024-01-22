/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/17 16:56:15 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:31:23 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_print;

	i = 0;
	is_print = 1;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			is_print = 0;
			break ;
		}
		i++;
	}
	return (is_print);
}
