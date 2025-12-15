#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==2 || n==3){
        cout<<"NO SOLUTION\n";
    }
    else if(n%2!=0){
        int e=n-1;
        int o=n-2;
        while(e>1){
            cout<<e<<" ";
            e=e-2;
        }
        cout<<n<<" ";
        while(o>0){
            cout<<o<<" ";
            o=o-2;
        }
        cout<<"\n";
    }
    else{
        int e=2;
        int o=1;
        while(e<=n){
            cout<<e<<" ";
            e=e+2;
        }
        while(o<n){
            cout<<o<<" ";
            o=o+2;
        }
        cout<<"\n";
    }
}