/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:25:51 by lprieto-          #+#    #+#             */
/*   Updated: 2023/09/10 13:18:55 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		++str;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_print_all(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		++i;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		k;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		k = i;
		while (k <= argc - 2)
		{
			if (ft_strcmp(argv[i], argv[1 + k]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[1 + k];
				argv[1 + k] = temp;
			}
			++k;
		}
		++i;
	}
	ft_print_all(argc, argv);
	return (0);
}
