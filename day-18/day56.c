#include <stdio.h>
#include <string.h>
#include<math.h>
 int main(){
    char s[1000];  
    int  i,j,count=0,n,m=0,b[100],l=0,e,d;
    float c[100];
    printf("Enter  the string : ");
    gets(s);
    for(j=0;s[j];j++);
	 n=j; 
    for(i=0;i<n;i++){
         if(((s[i]>='a')||(s[i]<='z'))&&((s[i]>='A')||(s[i]<='Z'))){
         if((int)s[i]!=32){
            m=m+1;
        }
        else 
        continue;
        }
     	count=1;
    	if(s[i]){
		 for(j=i+1;j<n;j++) {   	    	
	        if((((int)s[i]==(int)s[j])||((int)s[i]==(int)s[j]+32)||((int)s[i]==(int)s[j]-32))&&(((int)s[i]>=97)||((int)s[i]<=122)||((int)s[i]>=65)||((int)s[i]<=90)&&((int)s[j]>=97)||((int)s[j]<=122)||((int)s[j]>=65)||((int)s[j]<=90))){        
                 count++;
                  s[j]='\0';
	     	}
	      }  	      
          l=l+1;
       }           
          b[i]=count;
     }
	   for(i=0;i<l;i++)
    {
        if((int)s[i]!=32)
        c[i]=(float)(b[i])*100/m;
        else
        c[i]==-1;
    }
    for (i = 0; i < l; i++) {
            for (j = i + 1; j < l; j++) {
               if((c[i] <= c[j]) &&(((int)s[i]!=32)&&((int)s[j]!=32))){
                    e=(int)s[i];
                    s[i]=(int)s[j];
                    s[j]= e;
                    d = c[i];
                    c[i] = c[j];
                    c[j] = d;
                }
            }
        }
 printf("The most occuring characters are:\n");
        for (i = 0; i < 5; i++) {
            printf("%c : %0.2f%\n",(char)s[i],c[i]);
        }
return 0;
}