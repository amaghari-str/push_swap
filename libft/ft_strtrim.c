/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:49:12 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/26 15:22:46 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	char	*p;
	char	*buff;

	if (!s1 || !set)
		return (NULL);
	p = ft_strdup(s1);
	if (!p)
		return (NULL);
	i = (int)ft_strlen(s1) - 1;
	while (i >= 0 && ft_strchr(set, s1[i]))
	{
		p[i] = '\0';
		i--;
	}
	start = 0;
	while (p[start] && ft_strchr(set, p[start]))
		start++;
	buff = ft_strdup(&p[start]);
	free(p);
	return (buff);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void run_test(int test_num, const char *s1,
	const char *set, const char *expected) {
    char *result = ft_strtrim(s1, set);

    printf("Test %d: ", test_num);
    if ((result == NULL && expected == NULL) || 
(result && expected && strcmp(result, expected) == 0)) {
        printf("✅ PASSED\n");
    } else {
        printf("❌ FAILED\n");
    }
    printf("  s1       = \"%s\"\n", s1 ? s1 : "NULL");
    printf("  set      = \"%s\"\n", set ? set : "NULL");
    printf("  Got      = \"%s\"\n", result ? result : "NULL");
    printf("  Expected = \"%s\"\n\n", expected ? expected : "NULL");

    // Free the allocated memory if the 
    //function successfully returned a new string
    if (result) {
        free(result);
    }
}

int main(void) {
    printf("=== Running Tests for ft_strtrim ===\n\n");

    // Test 1: Standard trimming of spaces and punctuation from both ends
    run_test(1, "   Hello, World!   ", " ", "Hello, World!");

    // Test 2: Trimming multiple different characters from set
    run_test(2, "xxxyyyHello, World!yyyxxx", "xy", "Hello, World!");

    // Test 3: No matching characters to trim
    run_test(4, "Hello, World!", "x", "Hello, World!");

    // Test 5: String consists entirely of set characters
    run_test(5, "aaaaaa", "a", "");

    // Test 6: Empty set characters
    run_test(6, "Hello, World!", "", "Hello, World!");

    // Test 7: Empty source string s1
    run_test(7, "", "abc", "");

    // Test 8: Complex set with mixed characters
    run_test(8, "\n \t  abc  \t \n", " \t\n", "abc");

    return 0;
}
*/
