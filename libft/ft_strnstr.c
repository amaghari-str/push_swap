/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:44:12 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 20:11:11 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] && to_find[j]
			&& str[i + j] == to_find[j] && (i + j) < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

// Declaration of your function (replace with #include "libft.h" if applicable)
char *ft_strnstr(const char *big, const char *little, size_t len);

void run_test(int test_num, const char *big,
 const char *little, size_t len, const char *expected) {
    char *result = ft_strnstr(big, little, len);

    printf("Test %d: ", test_num);
    if (result == expected || (result
	 && expected && strcmp(result, expected) == 0)) {
        printf("✅ PASSED");
    } else {
        printf("❌ FAILED");
    }
    printf("\n  big      = \"%s\"\n", big);
    printf("  little   = \"%s\"\n", little);
    printf("  len      = %zu\n", len);
    printf("  Got      = %s\n", result ? result : "NULL");
    printf("  Expected = %s\n\n", expected ? expected : "NULL");
}

int main(void) {
    const char *haystack = "lorem ipsum dolor sit amet";

    printf("=== Running Tests for ft_strnstr ===\n\n");

    // Test 1: Standard search in the middle with sufficient len
    run_test(1, haystack, "ipsum", 20, "ipsum dolor sit amet");

    // Test 2: Substring exists, but len is too small
    // to reach/match it (should return NULL)
    run_test(2, haystack, "ipsum", 8, NULL);

    // Test 3: Substring matches exactly at boundary length len
    run_test(3, "lorem", "lorem", 5, "lorem");

    // Test 4: Empty 'little' string (should return 'big')
    run_test(4, haystack, "", 10, haystack);

    // Test 5: Substring does not exist in 'big'
    run_test(5, haystack, "foo", 20, NULL);

    // Test 6: len is 0
    run_test(6, haystack, "lorem", 0, NULL);

    // Test 7: 'little' is longer than 'len'
    run_test(7, "abc", "abcd", 3, NULL);

    // Test 8: Substring at the very end with sufficient len
    run_test(8, haystack, "amet", 30, "amet");

    // Test 9: Substring at the end, but len cuts off just before it
    run_test(9, haystack, "amet", 24, NULL);

    return 0;
}
*/
