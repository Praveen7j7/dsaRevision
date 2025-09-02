#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main() {
ll n;
cin>>n;

ll k;
cin>>k;

ll b[n];
for(ll i=0;i<n;i++){
    cin>>b[i];

}
ll count =0;
for(ll i=0;i<n;i++){
    ll sum=0;
    for(ll j=i;j<n;j++){
        sum=sum+b[j];
        if(sum<=k){
            //cout<<i<<" "<<j;
            //cout<<'\n';
            count++;
        }
    }
}
    
cout<<count;

    return 0;
}
//TC=> 0(N^2)
//SC=>0(1)