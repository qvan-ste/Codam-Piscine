/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/17 11:39:59 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:31:38 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i])
	{
		if ((str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a')
			|| (str[i] > 'z'))
		{
			is_alpha = 0;
			break ;
		}
		i++;
	}
	return (is_alpha);
}
