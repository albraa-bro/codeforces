//https://codeforces.com/problemset/problem/1037/C
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string s1,s2; cin>>s1>>s2;
    int cnt=0;
    int i=0;
    for(;i<n-1;i++){
        if(s1[i]==s2[i])continue;
        if((s1[i]=='1' and s1[i+1]=='0')and(s2[i]=='0' and s2[i+1]=='1')){
            cnt++; 
            i++;
        }else if((s1[i]=='0' and s1[i+1]=='1')and(s2[i]=='1' and s2[i+1]=='0')){
            cnt++; 
            i++;
        }else cnt++;
    }
    if(i==n-1 and s1[i]!=s2[i])cnt++;
    cout<<cnt<<"\n";
}
