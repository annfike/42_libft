/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:52:15 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/16 15:42:31 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strcmp() and strncmp() functions lexicographically compare the
null-terminated strings s1 and s2.

The	strncmp(void) function compares not more than n characters.Because strncmp()
is designed for comparing strings rather than binary data,characters that appear
after a	`\0' character are not compared.

RETURN VALUES
		The strcmp() and strncmp() functions return an integer greater than,
			equal to, or less
		than 0, according as the string s1 is greater than, equal to,
			or less than the string
		s2.  The comparison is done using unsigned characters,
			so that `\200' is greater than
		`\0'.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
  char s1[] = "sk";
  char s2[] = "s";

  int output = ft_strncmp(s1, s2, 2);
  printf("output = %d\n", output);
  return (0);
 }*/