//Count the number vowel, consonant, digit and special character

#include <stdio.h>
int main() {
    char s[100];
    int vowel, consonant, digit, special;

    vowel = consonant = digit = special = 0;

    printf("Enter a string: ");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||
            s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
            s[i] == 'U') {
            vowel++;
        } else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            consonant++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            digit++;
        } else{
            special++;
        }
    }

    printf("Vowels: %d", vowel);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nSpecial Character: %d\n", special);
    return 0;
}
