/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:02:06 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/18 11:35:27 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

// strchr - первое вхождение , strrchr - последнее
// Функция strrchr ищет последнее вхождения символа, 
// код которого указан в аргументе c, в строке, на которую указывает аргумент s
{
	size_t len;
	
	len = ft_strlen(s);
	if((char)c == '\0')
		return ((char *)s + len);
	while ( len-- )
	{
		if (s[len] == c)
			return((char *)s + len);
	}
	return 0;
}

// int main()
// {
//     char s[11] = "0123456789";
//     int c = '5'; // код искомого символа
//     char *in_c; //  указатель на искомую перем. в строке, по кот будет поиск
    
//     in_c = ft_strrchr (s, c);

//     if (in_c == NULL)
//       printf("Символ в строке не найден\n");
//     else
//       printf("%s%s\n", "Искомый символ в строкms
//    return 0;
// } 