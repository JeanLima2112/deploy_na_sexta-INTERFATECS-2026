#include <bits/stdc++.h>

using namespace std;

int main(){

    long N; cin >> N;
    bool primo = true;

    for(long i=2; i*i <N; i++){
        if (N % i == 0) primo = false;
    }

    if(primo) cout << "sim" << endl;
    else cout << "nao" << endl;

    return 0;
}