#include<bits/stdc++.h>
using namespace std;
int max_sum_of_subarray(int arr[], int n, int k)
{

    int max_sum = 0;
    for (int i = 0; i + k <= n; i++) {
        int temp = 0;
       for (int j = i; j < i + k; j++) {
            temp += arr[j];
        }
        if (temp > max_sum)
           max_sum = temp;
    }
    return max_sum;
}

int main()
{
    int i,m,k,o;
    cout<<"Enter the number of cherry trees:"<<endl;
    cin>>m;
     cout<<"Enter the number of trees you can pick from:"<<endl;
    cin>>k;
    int a[m];
     cout<<"Enter the number of cherries in each tree:"<<endl;
    for(i=0;i<m;i++)
    {
    cin>>a[i];
    }
    int n = sizeof(a) / sizeof(int);
    int max_sum;
    max_sum = max_sum_of_subarray(a, n, k);
     cout << max_sum << endl;
     return 0;
}