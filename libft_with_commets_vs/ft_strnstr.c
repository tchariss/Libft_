/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:02:01 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/17 17:01:43 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
/*
    haystack - строка в которой ищут
    needle - строка ( есть ли строка needle в haystack ? )
    len - ? максимальное ? кол-во символов для поиска
   */ 
//strnstr - находит первую подстроку в строке с ограниченной длиной
/*
Функция strnstr ищет первое вхождение len символов строки (за исключением признак конца строки), 
на которую указывает аргумент needle, в строку , на которую указывает аргумент haystack. 
Если строка needle имеет нулевую длину, то функция вернет указатель на начало строки haystack
*/
 
//  Возвращает указатель на найденную подстроку или 0 , если needle (строка) не найдена
//  Если needle = 0, возвращается haystack
{
	size_t a;
	size_t b;
	size_t c;

	a = 0;
	if (ft_strlen(needle) == 0) // strlen считает количество символов в needle , если она пустая , вернем строку haystack
	{
		return((char *)haystack); 
	}
	while (a < len && haystack[a] != '\0')
	{
		b = 0;
		c = a; // если обнаружили , что needle[b] == needle[c] - у a предыдущее значение с, то есть остановися перед иглой и пошел ее читать и рассматривать 
		while (needle[b] == haystack[c] && c < len && needle[b] != '\0') // если элемент haystack[c] не равен needle[b], выходим из цикла и идем по haystack дальше 
		{	// если 1 первый элемент needle равен элементу haystack идем в if 
			// должен вернуть на первый совпадающий элемент из haystack c needle 
			c++;
			b++;
		}
		if (needle[b] == '\0') // если не конец строки, то идем дальше в while(c++, b++) проверяем совпадение элементов строки и подстроки
		{
			return ((char*)&haystack[a]);// // если строка needle закончила (= '\0'), то return первый элемент needle
		}
		a++; // идем дальше по оставшимся элементам haystack, если needle = 0
	}
	return (NULL);
}
/*
int main()
{
    char hay[] = "abcdefg";
    char ned[] = "";
    char *str;

    printf("%s\n", hay);
    printf("%s\n", ned);
    str = ft_strnstr(hay, ned, 7);
    printf("%s\n", str);

    return (0);
} 
*/