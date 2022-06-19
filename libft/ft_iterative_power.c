/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebreche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:53:41 by bebreche          #+#    #+#             */
/*   Updated: 2022/06/17 19:53:53 by bebreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_power(int nb, int power)
{
    int i;

    i = nb;
    if (power < 0)
        return (1);
    if (power == 0)
        return (0);
    while (power-- > 1)
        nb *= i;
    return (nb);
}