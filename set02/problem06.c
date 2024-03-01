#include <stdio.h>
#include <string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
void input_string(char*a)
{
    printf("Enter a string:");
    scanf("%s",&a[0]);
}
void str_reverse(char *str,char *rev_str)
{
    int i;
    for (i = 0; str[i] !='\0';++i)
    rev_str[i] = str [strlen(str)-1-i];
    rev_str[i] = '\0';
}
void output (char *a,char *reverse_a)
{
    printf("\nOriginal String is :%s\nReversed String is : %s",&a[0],&reverse_a[0]);
}
int main()
{
    char original_string[50];
    char reverse_string[50];
    input_string(&original_string[0]);
    str_reverse(&original_string[0], &reverse_string[0]);
    output(&original_string[0], &reverse_string[0]);
    return 0;
}
T