#include <stdio.h>

/*
    Write a function that tests whether a string is a palindrome.
    For the simplicity of the code, use only lowercase letters.
*/

int main ()
{
    int n, count;

    printf("Please input the length of the word: ");
    scanf("%i", &n);

    char word[n];

    printf("Please input the word (no spaces): ");
    
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &word[i]);
    }

    // Test for palindromes
    for (int i = 0; i < n; i++)
    {
        printf("word[i] is %c, word[n - i] is %c!\n", word[i], word[n - i - 1]);
        if (word[i] == word[n - i - 1])
        {
            count++;
        }
    }

    if (count == n)
    {
        printf("The word is a palindrome.");
    }
    else
    {
        printf("The word is not a palindrome.");
    }

    return 0;
}