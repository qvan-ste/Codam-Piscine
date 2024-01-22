/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/17 17:28:43 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:31:10 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				&& (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				&& (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')))
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
