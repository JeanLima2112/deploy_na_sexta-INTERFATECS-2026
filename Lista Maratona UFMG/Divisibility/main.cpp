#include <bits/stdc++.h>

using namespace std;
int main(){

    int T; cin >> T;

    for (int i = 1; i <=T; i++){
        int A, B; cin >> A >> B; 
        if(A < B){
            cout << B-A <<endl;
        }
        else{
        int rest = A % B;

        if (rest == 0) cout << rest << endl;
        else{ 
                int j = A - rest;
                j += B;
                
                cout << j - A << endl;
        }
    }}

    return 0;
}