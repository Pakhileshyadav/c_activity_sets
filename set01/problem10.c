#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main() {
    char string1[100], string2[100];
    input_two_strings(string1, string2);
    int result = stringcompare(string1, string2);
    output(string1, string2, result);
    return 0;
}
void input_two_strings(char *string1, char *string2) {
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
}
int stringcompare(char *string1, char *string2) {
    while (*string1 != '\0' && *string2 != '\0') {
        if (*string1 != *string2) {
            return *string1 - *string2;
        }
        string1++;
        string2++;
    }
    return *string1 - *string2;
}
void output(char *string1, char *string2, int result) {
    printf("You entered:\n");
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }
}