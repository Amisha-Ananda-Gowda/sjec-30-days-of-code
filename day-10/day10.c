#include <stdio.h>
#include<math.h>

void main()
{
    int i,m,n;
    printf("Enter the value of m:\n");
    scanf("%d",&m);
    n=(tgamma(m-5)/(tgamma(5)*tgamma(m-9)));
    printf("%d",n);
}