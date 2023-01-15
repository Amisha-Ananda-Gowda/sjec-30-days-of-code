#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
  char text[500],s[500], ch;
  int key;
   printf("Enter a message to decrypt: ");
   gets(text);
   int i, j, max, length = strlen(text);  
    char maxChar = text[0];  
    int freq[length]; 
    strcpy(s,text);
    for(i = 0; i < length; i++) {  
        freq[i] = 1;  
        for(j = i+1; j < length; j++) {  
            if(s[i] == s[j] && s[i] != ' ' && s[i] != '0'&&s[i]!='.'&&s[i]!=','&&s[i]!=';') {  
                freq[i]++; 
                s[j] = '0';  
            }  
        }  
    }  
     max = freq[0];  
    for(i = 0; i < length; i++) {    
        if(max < freq[i]) {  
            max = freq[i];  
            maxChar = s[i];  
        }  
    }  
    if((int)maxChar>=65&&(int)maxChar<69)
    key=69-(int)maxChar;
    else if((int)maxChar>69&&(int)maxChar<=90)
    key=(int)maxChar-69;
    else if((int)maxChar>=97&&(int)maxChar<101)
    key=101-(int)maxChar;
    else
    key=(int)maxChar-101; 
  for (int i = 0; text[i] != '\0'; ++i) {
   ch = text[i];
    if (isalpha(ch)) {
      if (islower(ch)) {
        ch = (ch - 'a' - key + 26) % 26 + 'a';
      }
      if (isupper(ch)) {
        ch = (ch - 'A' - key + 26) % 26 + 'A';
      } 
    text[i] = ch;
  }
  }
  printf("Decrypted message:\n");
  puts(text);
  return 0;
}