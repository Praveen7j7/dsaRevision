#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main() {
int n,k;
cin>>n>>k;

map<int, int> mp;
int cnt=0;
vector<int> arr;
for(int i=0;i<arr.size();i++)
{
    int requiredElement=arr[i]+k;
    if(mp.find(requiredElement)!=mp.end())
    {
        //for ensuring the edge case when the duplicates are present in the array
        cnt=cnt+mp[requiredElement];
    }
    else{
        mp[arr[i]]++;
    }

}
return cnt;


}