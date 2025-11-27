#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    gets(str);  // Note: gets is simple for beginners but not recommended in advanced programs.

    while (str[i] != '\0') {  // Loop until null character
        length++;
        i++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
