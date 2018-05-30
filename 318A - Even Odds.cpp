#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,num;
    cin>>n>>k;
    if(k<=(n+1)/2)
    {
        num=(k*2)-1;

    }
    else
    {
        if(n%2==0)
            num=(k*2)-n;
        else
            num=(k*2)-n-1;

    }
    cout<<num<<endl;
    return 0;
}
