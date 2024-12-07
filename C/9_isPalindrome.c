#include <stdbool.h>
#include <stdio.h>

/**
 * @brief Checks if a given integer is a palindrome.
 *
 * @param[in] x The integer to check.
 *
 * @return true if the integer is a palindrome, false otherwise.
 */
bool isPalindrome(int x) {
    int original = x;
    long long reversed = 0;

    if (original < 0) {
        return false;
    }

    while (x != 0) {
        const int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return (original == (int)reversed);
}

int main(void) {
    const bool result = isPalindrome(121);
    printf("%d\n", result);

    return 0;
}
