#include <stdio.h>
#include <string.h>
void input_string(char *a);
void str_reverse(char *str ,char *rev_str);
void output( char *a, char *reverse_a);
int main () {
    char str[100],rev_str[100];
    input_string(str);
    str_reverse(str,rev_str);
    output(str,rev_str);
    return 0;
}
void input_string(char *a) {
    printf("Enter a string");
    scanf("%[^\n]s", a);
}
void str_reverse(char *str, char *rev_str) {
    int len =strlen(str);
    for (int i = 0; i < len; i++) {
        rev_str[i] = str[len -1 - i];
    }
    rev_str[len] = '\0';
}
