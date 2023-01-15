#include<stdio.h>
void main()
{
    int m,n;
    printf("Enter the number of rows and columns in the board:\n");
    scanf("%d %d",&m,&n);
    if(n>=2 && m>=2)
    {
        if((m*n)%3==0)
           printf("\nYes\n");
           else printf("\nNo\n"); 
    }
    else
    printf("\nNo\n"); 

}
