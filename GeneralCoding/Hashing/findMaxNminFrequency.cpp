#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

//brute force approach 
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


//Optimized
void hashedVersion(int arr[], int n)
{
    map<int, int> mp;

    int maxiFreq, maxiElement, miniFreq, miniElement;
    for(int i=0;i<n;i++)
    {
        if(mp.find(arr[i]) == mp.end())
        {
            mp[arr[i]]=1;

        }
        else{
            mp[arr[i]]+=1;
        }
        if(maxiFreq<mp[arr[i]])
        {
            maxiFreq=mp[arr[i]];
            maxiElement=arr[i];
        }
        if(miniFreq >  mp[arr[i]]){
            miniFreq=mp[arr[i]];
            miniElement=arr[i];
        }
    }
    //print (maxiFreq, maxiElement)
    //print (miniFreq, miniElement)
    return;
}