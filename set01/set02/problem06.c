#include <stdio.h>
#include <string.h>
void input_string(char *a);
void str_reverse(char *str ,char *rev_str);
void output( char *a, char *reverse_a);
int main ()
{
    char str[100],rev_str[100];
    input_string(str);
    str_reverse(str,rev_str);
    output(str,rev_str);
    return 0;
}
void input_string(char *a){
    printf("Enter a string");
    scanf("%[^\n]s",a);
}
void str_reverse(char *str,char *rev_str){
    int length = strlen(str);
    int i , j;
    for (i=0 , j =length -1; i < length; i++, j--){
        rev_str[i] = str[j];
    }
    rev_str[i] = '\0';
}