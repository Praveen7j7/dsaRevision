#include <bits/stdc++.h>
using namespace std;
typedef long  long int ll;
int main (){
    ll n;
    cin>>n;
    ll a[n+1];
    ll i=1;
    while(i<=n)
    {
        cin>>a[i];
        i++;
    }
    ll dp[n+1]={0};
    ll pvd=0;
    dp[1]=max(a[1],pvd);
    dp[2]=max(a[2],max(a[1],pvd));

    i=3;
    while(i<=n){
        dp[i]=max(dp[i-1],a[i]+dp[i-2]);
        i++;
    }
    cout<<dp[n];


    return 0;

    //o(n) --->time_complexity
    //0(n) --->space complexity
}