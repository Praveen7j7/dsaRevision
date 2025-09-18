// -> n; -> b[n+1]={0};
// -> start = 1 
// -> end = n 
// turn = 1
// reversed = false;
// while(start<end){selected = 0;
//     if(turn%2!=0){
//         if(reversed==false){
//             p1 = p1 + b[start]; selected = b[start] start++
//         //p1
//         }else{
//             //p1
//             p1 = p1 + b[end]; selected = b[end] end--
//         }
        
        
//     }else{
//         if(reversed==false){
//             p2 = p2 + b[start]; selected = b[start] start++
//         //p2
//         }else{
//             //p2
//             p2 = p2 + b[end]; selected = b[end] end-- 
//         }
//     }
//     if(selected%2==0){
//         if(reversed==false){
//             reversed=true;
//         }else{
//             reversed=false; 
//         }
//     }
    
    
    
    
//     turn++;
    
    
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> b(n + 1);
    for (int i = 1; i <= n; i++) cin >> b[i];

    int start = 1, end = n;
    ll p1 = 0, p2 = 0;
    int turn = 1;
    bool reversed = false;

    while (start <= end) {
        ll selected = 0;

        if (turn % 2 != 0) {  // Player 1's turn
            if (!reversed) {
                selected = b[start++];
            } else {
                selected = b[end--];
            }
            p1 += selected;
        } else {  // Player 2's turn
            if (!reversed) {
                selected = b[start++];
            } else {
                selected = b[end--];
            }
            p2 += selected;
        }

        // toggle reversed if selected is even
        if (selected % 2 == 0) {
            reversed = !reversed;
        }

        turn++;
    }

    cout << "Player1: " << p1 << " Player2: " << p2 << endl;
    return 0;
}
