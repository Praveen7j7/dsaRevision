#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

bool main() {
int n,k;
cin>>n>>k;
int arr[]={1,3,52,56,3,54,3,2};
for(int i=1;i<=n;i++)
{
    for(int j=i+1;j<=k+i;j++)
    {
        if(arr[i]==arr[j])
        {
            return true;
            //and we can even store if the question demands us to do that 
        }
    }
}
return false;
    
}