#include <iostream>
using namespace std; 
typedef long long int ll;

int main() {
    ll n;
    cin>>n;
    ll a[n+1]={0};
    ll b[n+1]={0};

    ll i=1;
    while(i<=n){
        cin>>a[i];
        i++;
    }
    ll dp[n+1]={0};
    i=1;
    while(i<=n){
        cin>>b[i];
        i++;
    }

     dp[1]=max(a[1],b[1]);
     dp[2]=max(dp[1],max(a[2],b[2]));
    i=3;
    while(i<=n){
        ll x=dp[i-1];
        ll y=b[i]+dp[i-2];
        ll z=a[i]+dp[i-2];

        dp[i]=max(x,max(y,z));
        cout<<dp[i]<<endl;


        i++;
    }


    return 0;
}