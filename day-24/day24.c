#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
  char t[500], ch;
  int key;
  printf("Enter a string:\n");
  gets(t);
  key=rand();
  for (int i = 0; t[i] != '\0'; ++i) {
     ch = t[i];
    if (isalpha(ch)) {
      if (islower(ch)) {
        ch = (ch - 'a' + key) % 26 + 'a';
      }
      if (isupper(ch)) {
        ch = (ch - 'A' + key) % 26 + 'A';
      }
     } 
      t[i] = ch;
  }
  printf("Enciphered form of the string:\n");
  puts(t);
  return 0;
}