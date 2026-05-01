#include <bits/stdc++.h>

using namespace std;

int main(){
    int cont = 1;
    int cnt =  0;

    while (true){
        int T;
        cin >> T;
        if (T == 0) break;
        if(cnt != 0){
            cout << endl;
        }

        for (int i = 1; i <= T; i++){
            int pos;
            cin >> pos;
            if (pos == i){
                cout << "Teste "<< cont << endl;
                cout << i << endl;
            }
            
        }
        cont += 1;
        cnt = 1;
        
    }

    return 0;
}