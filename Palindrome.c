#include <stdio.h>

int Palindrome(int num) {
    int reversedNum = 0, originalNum = num;
    
    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int isPalindrome = Palindrome(num);

    if (isPalindrome)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}