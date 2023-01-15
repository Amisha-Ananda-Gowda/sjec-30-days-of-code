#include<stdio.h>
void main()
{
    int n,i,j,side;
    printf("Enter the number of triangles\n");
    scanf("%d",&n);
    int a[n][3];
    printf("Enter the sides of triangle\n");
    for(i=1;i<=n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            }
    }
    for(i=1;i<=n;i++){
       if(i%3==0){
        if(a[i][0]>a[i][1]&&a[i][0]>a[i][2])
        side=a[i][0];
        else if(a[i][1]>a[i][0]&&a[i][1]>a[i][2])
        side=a[i][1];
        else side=a[i][2];
             printf("%d\n",side);
    }
    else if(i%3==1){
        if(a[i][0]<a[i][1]&&a[i][0]<a[i][2])
        side=a[i][0];
        else if(a[i][1]<a[i][0]&&a[i][1]<a[i][2])
        side=a[i][1];
        else side=a[i][2];
            printf("%d\n",side);
    }
    else{
         if((a[i][0]<a[i][1]&&a[i][0]>a[i][2])||(a[i][0]>a[i][1]&&a[i][0]<a[i][2]))
        side=a[i][0];
        else if((a[i][1]<a[i][0]&&a[i][1]>a[i][2])||(a[i][1]>a[i][0]&&a[i][1]<a[i][2]))
        side=a[i][1];
        else side=a[i][2];
        printf("%d\n",side);
    }
    }
}