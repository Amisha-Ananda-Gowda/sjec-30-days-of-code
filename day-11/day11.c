#include<stdio.h>

void main()
{
    float p,q,r,s,t;
    double a1,a2,a3,a4;
    printf("Enter the radius of a circle,side of a square,side of equilateral triangle,length and breadth of a rectangle:\n");
    scanf("%f%f%f%f%f",&p,&q,&r,&s,&t);
    a1=3.14*p*p;
    a2=q*q;
    a3=0.43301*r*r;
    a4=s*t;

    if(a1>a4&&a4>a2&&a2>a3)
          printf("Circle\nRectangle\nSquare\nTriangle\n");
   
    else if(a1>a3&&a3>a2&&a2>a4)
    printf("Circle\nTriangle\nSquare\nRectangle\n");
    else if(a1>a4&&a4>a3&&a3>a2)
    printf("Circle\nRectangle\nTriangle\nSquare\n"); 
   else if(a1>a2&&a2>a4&&a4>a3)
    printf("Circle\nSquare\nRectangle\nTriangle\n");
      else if(a1>a3&&a3>a4&&a4>a2)
       printf("Circle\nTriangle\nRectangle\nSquare\n");
         else  if(a1>a2&&a2>a3&&a3>a4)
    printf("Circle\nSquare\nTriangle\nRectangle\n");
            else if(a2>a3&&a3>a4&&a4>a1)
             printf("Square\nTriangle\nRectangle\nCircle\n");
             else if(a2>a3&&a3>a1&&a1>a4)
              printf("Square\nTriangle\nCircle\nRectangle\n");
              else if(a2>a4&&a4>a3&&a3>a1)
               printf("Square\nRectangle\nTriangle\nCircle\n");
               else if(a2>a1&&a1>a4&&a4>a3)
                printf("Square\nCircle\nRectangle\nTriangle\n");
                else if(a2>a4&&a4>a1&&a1>a3)
                 printf("Square\nCircle\nTriangle\nRectangle\n");
                 else if(a2>a1&&a1>a3&&a3>a4)
                  printf("Square\nCircle\nTriangle\nRectangle\n");
                  else if(a3>a4&&a4>a2&&a2>a1)
                   printf("Triangle\nRectangle\nSquare\nCircle\n");
                   else if(a3>a4&&a4>a1&&a1>a2)
                    printf("Triangle\nRectangle\nCircle\nSquare\n");
                    else if(a3>a1&&a1>a2&&a2>a4)
                     printf("Triangle\nCircle\nSquare\nRectangle\n");
                     else if(a3>a1&&a1>a4&&a4>a2)
                      printf("Triangle\nCircle\nRectangle\nSquare\n");
                      else if(a3>a2&&a2>a4&&a4>a1)
                       printf("Triangle\nSquare\nRectangle\nCircle\n");
                       else if(a3>a2&&a2>a1&&a1>a4)
                        printf("Triangle\nSquare\nCircle\nRectangle\n");
                        else if(a4>a1&&a1>a2&&a2>a3)
                         printf("Rectangle\nCircle\nSquare\nTriangle\n");
                          else if(a4>a1&&a1>a3&&a3>a2)
                           printf("Rectangle\nCircle\nTriangle\nSquare\n");
                            else if(a4>a2&&a2>a1&&a1>a3)
                             printf("Rectangle\nSquare\nCircle\nTriangle\n");
                              else if(a4>a2&&a2>a3&&a3>a1)
                               printf("Rectangle\nSquare\nTriangle\nCircle\n");
                                else if(a4>a3&&a3>a1&&a1>a2)
                                 printf("Rectangle\nTriangle\nCircle\nSquare\n");
                                  else if(a4>a3&&a3>a2&&a2>a1)
                                   printf("Rectangle\nTriangle\nSquare\nCircle\n");
                                    else
                                      printf("Enter different values");
}