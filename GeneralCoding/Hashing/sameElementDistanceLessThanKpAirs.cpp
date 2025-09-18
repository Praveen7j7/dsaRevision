#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;
//Brute Force Solution 
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
//Optimized Solution 
bool function
{
    input(n)
    input(k)
    input(arr)
    bool check(){
        map<int, int> mp;
        //key=element 
        //value=last index where key element has occured in arr
        for(int i=1;i<=n;i++)
        {
            int currentElement =arr[i];
            if(mp.find(currentELement) != mp.end()){
                int lastIndex=mp[currentElement]
                int distance=i-lastIndex;

                if(distance <=k)
                return true;
            }
        }
        return false;
    }
}


bool containsNearbyDuplicateOptimized(vector<int> & nums, int k)
{
    unordered_map<int,int> numIndices;

    for(int i=0;i<nums.size();++i)
    {
        if(numIndices.find(nums[i])!=numIndices.end() && i-numIndices[nums[i]]<=k){
            return true;
        }
        numIndices[nums[i]]-i;
    }
    return false;
}