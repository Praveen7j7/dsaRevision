#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int countPairsWithDifferenceK(const vector<int> & b, int k)
{
    unordered_map<int, int> freq;
    int count=0;
    
    for(int j=0;j<b.size();++j)
    {
        if(freq.find(b[j]-k)!=freq.end())
        {
            count+=freq[b[j]-k];
        }
        if(k!=0 && freq.find(b[j]+k)!=freq.end())
        {
            count+=freq[b[j]+k];
        }
            freq[b[j]]++;
    }
    return count;
}

int main() {
vector<int> b={1,2,3,4,5};
int k=2;
cout<<countPairsWithDifferenceK(b,k)<<endl;

    return 0;
}