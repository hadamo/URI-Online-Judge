#include <bits/stdc++.h>
using namespace std;
//hádamo egito

int main(){ // decodificador de cifra de cesa 1253
	int n,key,length;
	string cod;
	cin>>n;
	while(n>0){
		cin >> cod >> key;
    length = cod.length();
		for(int i=0;i<length;++i){
			if(cod[i]>90) cod[i]-=32; //se for letra minuscula muda pra maiuscula
			if(cod[i]-key <65) cod[i]+= 25-(key-1); //se ao subtrair a chave, letra rotacionar pra esq de a, recomeça do z
			else cod[i]-=key;   //caso contrário só rotaciona pra esq em key qtd de letras;
			
		}
		cout << cod<<"\n";
		n--;
		
	}
}
