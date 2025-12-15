#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long c=0;
    for(long long i=5;i<=n;i=i*5){
        c=c+n/i;
    }
    cout<<c<<"\n";
}