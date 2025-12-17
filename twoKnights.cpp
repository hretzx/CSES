#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++){
        long long ans=(pow(i,4)- (9 * pow(i,2)) + 24*i -16)/2;
        cout<<ans<<"\n";
    }
}