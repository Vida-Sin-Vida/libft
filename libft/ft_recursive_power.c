/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebreche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:54:02 by bebreche          #+#    #+#             */
/*   Updated: 2022/06/17 19:54:23 by bebreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (1);
    if (power == 0)
        return (0);
    if (power > 1)
        return (nb * ft_recursive_power(nb, --power));
    return (nb);
}
