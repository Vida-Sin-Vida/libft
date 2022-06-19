/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebreche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:55:47 by bebreche          #+#    #+#             */
/*   Updated: 2022/06/17 19:55:55 by bebreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i++ <= nb / i)
        if (nb % i == 0)
            return (0);
    return (1);
}

int ft_find_next_prime(int nb)
{
    int i;

    i = nb;
    if (nb <= 1)
        return (2);
    while (!ft_prime(i))
        i++;
    return (i);
}
