#include <stdio.h>
int collatz(int);
int steps;
int main (){
    int i,ar[10000],br[10000],a,b;
    printf("Enter the lower limit and upper limit of the range:\n");
    scanf("%d%d", &a,&b);
    for(i=a;i<=b;i++){
        steps=0;
        ar[i]= collatz(i);
        br[i]=ar[i];
    }
    int max=ar[0];
    for(i=a;i<=b;i++){
        if(ar[i]>max){
           max=ar[i];
        }
    }
    for(i=a;i<=b;i++){
        if(br[i]==max){
           printf("%d",i);
           break;
        }
    }
    return 0;
}

int collatz(int i){
    if (i == 1)
        return steps;
    if (i % 2 == 0 && i > 0){
        i = i / 2;
        steps++;
        return collatz(i);
    }
    else{
        i = (i * 3) + 1;
        steps++;
        return collatz(i);
    }
}