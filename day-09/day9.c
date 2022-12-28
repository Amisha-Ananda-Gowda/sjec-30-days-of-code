
#include<stdio.h>
void main()
{
int n,i,j;
printf("Enter the width:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
printf(" ");
for(j=1;j<=i;j++)
printf("# ");
printf("\n");
}

for(i=n-1;i>=1;i--)
{
for(j=1;j<=n-i;j++)
printf(" ");
for(j=1;j<=i;j++)
printf("# ");
printf("\n");


}
}
