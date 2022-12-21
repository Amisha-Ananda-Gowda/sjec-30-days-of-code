#include<stdio.h>
#include<math.h>

int main()
{
int a,b,i;
printf("Enter two non-negative integers:\n");
scanf("%d%d",&a,&b);
if(a<b)
{
for(i=a;i<=b;i++)
{
    if(i%3==0)
    printf("Foo\n");
    else
     if(i%2==0 && i%3!=0)
    printf("Bar\n");
    else 
    if(i%2!=0 && i%3!=0)
    printf("Baz\n");
    else
    printf("\n");

}
}
else
{
for(i=b;i<=a;i++)
{
    if(i%3==0)
    printf("Foo\n");
    else
     if(i%2==0 && i%3!=0)
    printf("Bar\n");
    else 
    if(i%2!=0 && i%3!=0)
    printf("Baz\n");
    else
    printf("\n");

}
}
return 0;
}