#include <iostream>
#include <string>

using namespace std;

class vetor {

public:
    int numeros[5];

    //preenche o vetor que tem 5 espaços de memória com 5 números, através do loop for, enquanto i < 5;
    //Sub-rotina
    void preenche (){

        for ( int i = 0 ; i < 5; i++){
            cout << "numeros: " << i + 1 << endl;
            cin >> numeros[i];
        }
    }
     // imprime na tela cada número em cada espaço de memória
     // Sub-rotina
    void imprime(){

        cout << "números armazenados no vetor:" << endl;
            for ( int i = 0 ; i < 5; i++){
                cout <<"i = " << numeros[i] << endl;
        }
    }
    // função que implementa algoritmo de bubble sort para ordenação do vetor
    void bubblesort( int numeros [5], int tamanho ){
        vetor imprime;
        int i, j, temp;
        string h;

        cout << "Prosseguir? y/n" << endl;
        cin >> h;

        if(h == "y"){

            for (i = 0; i < tamanho; i++)
                for (j = 0; j < tamanho-i-1; j++)
                    if(numeros[j] > numeros[ j + 1 ]){
                         temp = numeros[j];
                         numeros[j] = numeros [j + 1];
                         numeros[j + 1] = temp;
                    }
            cout << "Ordenação completa:" << endl;
                for ( int j = 0 ; j < 5; j++){
                    cout <<"i = " << numeros[j] << endl;

        }
        }else{
            cout << "Finalizado" << endl;
        }
    }
};
//função main
int main(){

    string r;
    vetor v;
    vetor o;

    cout << "comecar? y/n" << endl;
    cin >> r;
    if (r == "y"){
       cout << "Escolha os números para preencher o vetor:" << endl;
       v.preenche();
       v.imprime();

       string h;

    cout<< "continuar para ordenação do vetor? y/n" << endl;
    cin >> h;

        if (h == "y"){

            v.bubblesort(v.numeros, 5);
        }
    }else{

        cout << "Finalizado" << endl;
    }
   return 0;
}
