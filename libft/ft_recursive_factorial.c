/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebreche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:52:00 by bebreche          #+#    #+#             */
/*   Updated: 2022/06/17 19:52:21 by bebreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (0);
    if (nb == 1)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}
