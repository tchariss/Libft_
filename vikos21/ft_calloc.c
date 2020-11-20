/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:02:36 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/17 13:21:04 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Функция calloc()  возвращает указатель на count элементов памяти размера size, заполненных нулями
void	*ft_calloc(size_t count, size_t size)
/*
count - количество элементов
size - длина каждого элемента в байтах
*/
{
	int *p;
	size_t a;
	
	a = 0;
	p = (void*)malloc(count * size); // 1 - '\0'
	if (p == NULL)
		return (NULL);
	while ( a < count )
	{
		p[a] = '\0';
		a++;
	}
	return (p);
	// void *(malloc) - нужен преобразователь - так как calloc возвращает  указатель  char  на  захваченное пространство
	// вернуть указатель, кот подходит для каждого типа переменных
}