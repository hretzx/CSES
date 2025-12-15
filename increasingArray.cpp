#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> a;
    long long c=0;
    for(long long i=0;i<n;i++){
        long long x;
        cin>>x;
        a.push_back(x);
        if(i>0){
            if(a[i-1]>a[i]){
                c=c+(a[i-1]-a[i]);
                a[i]=a[i-1];
            }
        }
    }
    cout<<c<<"\n";
}