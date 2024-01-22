/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 17:08:38 by qvan-ste      #+#    #+#                 */
/*   Updated: 2023/07/31 13:01:17 by qvan-ste      ########   odam.nl         */
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
	(void)argc;
	write(1, argv[0], str_len(argv[0]));
	write(1, "\n", 1);
}
