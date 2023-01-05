#include<stdio.h>
void main(){
    int n,i;
    printf("Enter the number of Frames:\n");
    scanf("%d",&n);//Reading number of frames from the user
    int a[n];
    printf("Enter the frames represented by decimal numbers:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);//Reading all the frames represented by unique decimal numbers
    printf("All the minimum number of frames needed to be sent without losing any video quality are:\n");
    printf("%d ",a[0]);
    for(i=1;i<n;i++){
        if(a[i-1]==a[i])//Checking whether the current frame is same as the previous
        continue;//If the frames is same as the previous check the next frame without printing this frame
        else
        printf("%d ",a[i]);//Print the frame if it is not same as the previous
    } 
}