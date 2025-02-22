/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:56:35 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/10 19:10:31 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H

# define FT_ABS_H

# define ABS(Value) (abs(Value))

int	abs(int val)
{
	if (val < 0)
		val *= -1;
	return (val);
}
#endif
