#include <iostream>

using namespace std;
int main(){

    int inteiro ;
    inteiro = 5;
    cout << inteiro << endl;

    float realinf;
    realinf = 5.3e99;
    cout << realinf << endl; // quando estoura o limite ele recebe inf=infinito

    
    float real;
    real = 5.3;
    cout << real << endl;

    double realdouble;
    realdouble = 5.2e99;
    cout << realdouble << endl;

    double realdoubleinf;
    realdoubleinf = 1.2e308;
    cout << realdoubleinf << endl;


    bool booleano;
    booleano = false; 
    cout << booleano << endl;

    char letra;
    letra = 'b';
    cout << letra << endl;

    string palavra;
    palavra = "macaco";
    cout << palavra << endl;

    int idade; 
    cout << "Qual sua idade?" << endl;
    cin >> idade;
    cout <<"Idade:"<< idade << endl;

    return 0;

}