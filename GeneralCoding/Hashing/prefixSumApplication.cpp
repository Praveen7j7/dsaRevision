//Find the sum of L to R index for a given array in them what we need to do 
#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int prefix[n];
//prefix[0]=arr[0];
    for(int i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }

    //prefix[r]-prefix[l-1], //when both l and r needs to be included

    return 0;
}



