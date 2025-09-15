#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main() {

int arr[]={2,3,4,5,6,7,8,55,4};
int n=sizeof(arr)/sizeof(int);

int maxElement, maxCount, minElement, minCount;
for(int i=1;i<=n;i++){
    int cnt=0;
    for(int j=i;j<=n;j++)
    {
        if(arr[i]==arr[j])
            cnt++;
    }
    if(maxCount <cnt){
        maxCount=cnt;
        maxElement=arr[i];
    }
    if(minCount >cnt){
        maxCount=cnt;
        minElement=arr[i];
    }
}



    return 0;
}