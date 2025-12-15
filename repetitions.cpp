#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,max=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            max=c>max?c:max;
            c=0;
        }
    }
    max=c>max?c:max;
    cout<<max+1<<"\n";
}