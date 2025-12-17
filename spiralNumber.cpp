#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long x,y;
        cin>>x>>y;
        if(x==y && x==1){
            cout<<1<<"\n";
        }
        else{
            long long min=x>y?y:x;
            long long max=x>y?x:y;
            long long l=max*max;
            long long rx,ry;
            if(max%2==0){
                rx=max;
                ry=1;
            }
            else{
                rx=1;
                ry=max;
            }
            long long ans= abs(rx-x) + abs(ry-y);
            cout<<l-ans<<"\n";
        }
    }
}