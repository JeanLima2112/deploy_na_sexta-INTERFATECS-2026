#include <bits/stdc++.h>
using namespace std;

int main(){

    int T; cin >> T;

    for (int i=1; i <=T;i++){
        int A,B,X,Y; cin >> A >> B >> X >> Y;
        int U, D, L, R;

        L = X * A;
        R = (A - (X+1)) * A;
        U = Y * B;
        D = (B - (Y+1)) * B;

        list<int> candidatos = {L,U,R,D};

      

        candidatos.sort();
        cout << candidatos.back()<< endl;


        cout << L << endl;
        cout << R << endl;
        cout << U << endl;
        cout << D << endl;

        
    
    }

    return 0; 
}