/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebreche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:36:40 by bebreche          #+#    #+#             */
/*   Updated: 2022/06/17 19:36:51 by bebreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_factorial(int nb)
{
    int i;
    int res;

    i = 0;
    res = 1;
    if (nb < 0 || nb > 12)
        return (0);
    while (i++ < nb)
        res *= i;
    return (res);
}
