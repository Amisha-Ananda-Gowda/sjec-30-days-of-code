#include<stdio.h>
void main()
{
    int m,n,i,j,count,p=0,k=0;
    printf("Enter two non-negative numbers");
    scanf("%d%d",&m,&n);
    
    for(i=m;i<n;i++)
    {
        k=p;
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
            
        }

        if(count==2)
{
         
        
        p=i;
        if(k>0)
        {
        printf("%d - %d : %d\n",k,i,i-k-1);
}
}
    
    }
}
