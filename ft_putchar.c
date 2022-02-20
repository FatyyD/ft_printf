/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:26:15 by fadiallo          #+#    #+#             */
/*   Updated: 2022/02/14 17:22:08 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_putchar(char c, int *count)
{
    write(1, &c, 1);
    (*count)++;  
}