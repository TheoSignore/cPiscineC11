/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:27:35 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/22 17:23:24 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_foreach(int *tab, int length, void(*f)(int))
{
	if (length <= 0)
		return ;
	(f)(*tab);
	ft_foreach(tab + 1, length - 1, f);
}
