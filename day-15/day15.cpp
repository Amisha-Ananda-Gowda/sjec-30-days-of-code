#include<bits/stdc++.h>
using namespace std;
string s;
//calculating the decimal value
int value(char r){
   if (r =='I'||r =='i')
   return 1;
   if (r =='V'||r =='v')
   return 5;
   if (r =='X'||r =='x')
   return 10;
   if (r =='L'||r =='l')
   return 50;
   if (r =='C'||r =='c')
   return 100;
   if (r =='D'||r =='d')
   return 500;
   if (r =='M'||r =='m')
   return 1000;
   return -1;
}
//calculating decimal equivalent of given numeral
int convert_decimal(string &s){
   int n = 0;
   for (int i=0; i<s.length(); i++){
      //getting value of digit
      int s1 = value(s[i]);
      if (i+1 < s.length()){
         int s2 = value(s[i+1]);
         if (s1 >= s2){
            n = n + s1;
         }
         else{
            n = n + s2 - s1;
            i++;
         }
      }
      else{
         n = n + s1;
      }
   }
   return n;
}
int main(){
    cout<<"Enter the roman number:"<<endl;
    cin>>s;
   cout << "Arabic numeral:"<< convert_decimal(s) << endl;
   return 0;
}