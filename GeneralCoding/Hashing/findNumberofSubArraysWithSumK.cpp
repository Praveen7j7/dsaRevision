#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

//Brute Approach for the problem 

/*For every index j we will count the number of subarrays whhich are ending at index j and have sum k*/

// Better Solution 
/*
    P[i]=P[j]-k; then it is the valid subarray 
*/

int countSubarraysOptimized(vector<int> & arr, int k ){
    unordered_map<int, int> prefixSumCount;
    int sum=0, count=0;
    prefixSumCount[0]=1;
    for(int num: arr){
        sum +=num;
        if(prefixSumCount.find(sum-k)!=prefixSumCount.end()){
            count+=prefixSumCount[sum-k];
        }
        prefixSumCount[sum]++;
    }
    return count;
}
int main() {

    //
    return 0;

}