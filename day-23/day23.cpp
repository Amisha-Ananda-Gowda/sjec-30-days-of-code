#include <bits/stdc++.h>
using namespace std;
long long reverse(long long num)
{
    long long rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
bool isPalindrome(long long num)
{
    return (reverse(num) == num);
}
void ReverseandAdd(long long num)
{
    int s=0;
    long long rev_num = 0;
    while (s <= 500) {
        rev_num = reverse(num);
         num= num + rev_num;
         s++;
        if (isPalindrome(num)) {
            printf("%lld\n", num);
            break;
        }
        else if (s>500) {
            printf("NA");
        }
    }
}
int main()
{
    long long num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    ReverseandAdd(num);
    return 0;
}