
#include<stdio.h>
void main()
{
    int n,a[100],sum=0,i;
    float avg;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
{
if(a[i]>avg)
{
printf("%d ",a[i]);
}

}
}