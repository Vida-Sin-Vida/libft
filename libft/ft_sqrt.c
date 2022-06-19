/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebreche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:55:01 by bebreche          #+#    #+#             */
/*   Updated: 2022/06/17 19:55:06 by bebreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_sqrt(int nb)
{
    int i;

    i = 0;
    if (nb <= 0)
        return (0);
    while (i * i < nb)
        i++;
    if (i * i == nb)
        return (i);
    else
        return (0);
}