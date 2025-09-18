// -> n; ->read(n)
// ->b[n+1];

// for(i=1;i<=n;i++){
//     read(b[i]);
// }
// ->q;
// for(i=1;i<=q;i++)
//     read(target)

//     for(i=1;i<=n;i++){
//         u=u+abs(b[i]-target)
//     }
//     print(u)
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }

    int q;
    cin >> q;

    while (q--) {
        long long target;
        cin >> target;

        long long u = 0;
        for (int i = 1; i <= n; i++) {
            u += abs(b[i] - target);
        }
        cout << u << "\n";
    }

    return 0;
}
//But this will give TLE due to the contraints there in the question 

->n;->read(n);
->b[n+2];->prefix[n+1]={0};

tot=0;
for(i=1;i<=n;i++){
    read(b[i])->prefix[i]=prefix[i-1]+b[i];

    tot=tot+b[i];
} //o(N)
sort(b+1,b+n+1)   //[1.....N] sorted from index 1 till N 
b[0]=INT_MIN;b[n+1]=INT_MAX; //so the binary search never fails 


->q;
for(i=1;i<=q;i++){ //O(Q)
    read(target) u=0

    g=left_part_last_index(target)
    left_part=target*g -(prefix[g])
    right_part=(tot -prefix[g])-target*(N-g)

    print(u)
}

int left_part_last_index(target){
    low=1;hight=N;d=0
        while(low<=high && d==0){
            mid=(low+high)/2;
            if(a[mid]<=target){
                if(a[mid+1]<=target)
                l=mid+1;
                else{
                    answer=mid;d=1
                }

            }else{
                h=mid-1;
            }
        }
}

TC=>N+NlogN+LogN*Q
sc=>N //You never count the space of the input array, you count the space of the extra array 
//Mix of hashing, binarySearch, Computation everything 