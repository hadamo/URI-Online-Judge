#include<bits/stdc++.h>
using namespace std;

int main (){
int n, alunos;
float x;
float soma=0;
float media =0;
int cont=0;

vector <int> vet ;
cin >> n;
for(int i=0; i<n; i++){
    cin >> alunos;
    for (int j=0; j<alunos; ++j){
        int a;
        cin >> a;
        vet.push_back(a);
        soma += vet[j];
    }

    int tam = vet.size();
    //cout << "Tam: " << tam << endl;
    media = (double)(soma / tam);
    //cout << "Media: " << media << endl;

    for (int j=0; j<alunos; ++j){
        if (vet[j] > media){
            cont++;
        }
    }
    x = (double)(cont*100.000)/tam;
    printf("%.3lf%%\n", x);
    vet.clear();
    cont =0;
    soma =0;
}
    return 0;
}