#include <stdio.h>
#include <ctype.h>
#include <string.h> // for strcspn()

int main() {
    char str[1000];
    int digitCount = 0, specialCharCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    
int i;
    for ( i = 0; str[i] != '\0'; ++i) {
        if (isdigit((unsigned char)str[i])) {
            digitCount++;
        }
        else if (!isalpha((unsigned char)str[i]) &&
                 !isspace((unsigned char)str[i])) {
            specialCharCount++;
        }
    }

    printf("\nDigit count: %d\n", digitCount);
    printf("Special character count: %d\n", specialCharCount);

    return 0;
}
