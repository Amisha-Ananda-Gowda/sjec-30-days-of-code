#include<stdio.h>
#include<string.h>
int main()
{
    char name[25];
    printf("Enter your Name:");
    scanf("%[^\n]s",name);
    if(strlen(name))
    printf("Hello,%s!",name);
    else
    printf("Hello, SJEC!");
    return 0;
}