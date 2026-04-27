#include <bits/stdc++.h>

using namespace std;

int main(){
    int N; cin >> N;
    int fatorial;

    for (int i = 1; i<=N; i++){
        fatorial *= i;
    }
    
cout << fatorial << endl;

}
