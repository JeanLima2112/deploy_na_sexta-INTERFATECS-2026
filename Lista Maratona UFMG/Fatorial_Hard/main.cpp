#include <bits/stdc++.h>


using namespace std;

int main(){
    int N;
    int ints = 0;
    while(cin >> N){
        ints += 1;
        int val = 1;
        for (int i = 2; i <= N ; i++){
            val *=i;
            
            while (val % 10 == 0) {
                val /= 10;
            }
            val %= 100000;
        }
        cout << "Instancia " << ints << endl;
        cout << val % 10 << endl << endl;
    }
}
