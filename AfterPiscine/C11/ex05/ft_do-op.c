/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:49:40 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/01 20:09:33 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_add(int a, int b);
int	ft_sub(int a, int b);
int	ft_div(int a, int b);
int	ft_mult(int a, int b);
int	ft_mod(int a, int b);

void	ft_putnbr(int n)
{
	char	digit;
	long	nb_l;

	nb_l = n;
	if (nb_l < 0)
	{
		write(1, "-", 1);
		nb_l = -nb_l;
	}
	digit = (nb_l % 10) + '0';
	if (nb_l >= 10)
		ft_putnbr(nb_l / 10);
	write(1, &digit, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

void	ft_do_op(int nb_1, char operator, int nb_2, int (*f)(int, int))
{
	if (operator == '/' && nb_2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return ;
	}
	if (operator == '%' && nb_2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return ;
	}
	ft_putnbr(f(nb_1, nb_2));
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (1);
	}
	if (argv[2][1] != '\0')
	{
		write(1, "0\n", 2);
		return (1);
	}
	else if (argv[2][0] == '+')
		ft_do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]), ft_add);
	else if (argv[2][0] == '-')
		ft_do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]), ft_sub);
	else if (argv[2][0] == '/')
		ft_do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]), ft_div);
	else if (argv[2][0] == '*')
		ft_do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]), ft_mult);
	else if (argv[2][0] == '%')
		ft_do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]), ft_mod);
	else
		write(1, "0\n", 2);
	return (0);
}
