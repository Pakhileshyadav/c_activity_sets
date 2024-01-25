#include <stdio.h>
int input();
void compare(int a,int b,int c,int *largest);
void output(int a,int b,int c,int largest);
int main()
{
int a,b,c,largest;
a=input();
b=input();
c=input();
compare(a,b,c,&largest);
output(a,b,c,largest);
}
int input()
{
int x;
printf("enter the number:");
scanf("%d",&x);
return x;
}
void compare(int a,int b,int c,int *largest)
{
if(a>=b && a>=c)
{
*largest=a;
}
else{ if(b>=a && b>=c)
{
*largest=b;
}
else
{
*largest=c;
}}
}
void output(int a,int b,int c,int largest)
{
printf("the largest among the three numbers is %d\n",largest);
}