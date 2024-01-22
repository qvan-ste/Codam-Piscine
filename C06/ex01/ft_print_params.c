/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 17:25:39 by qvan-ste      #+#    #+#                 */
/*   Updated: 2023/07/26 17:25:41 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argc > 1)
	{
		write(1, argv[i], str_len(argv[i]));
		write(1, "\n", 1);
		argc--;
		i++;
	}
}
