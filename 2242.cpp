#include<bits/stdc++.h>
using namespace std;

int main(){

string a, b;
string concA;

cin >> a;
int tam = a.size();

for (int i=0; i<tam; i++){
    if(a[i]== 'a' || a[i]== 'e' || a[i]== 'i' || a[i]== 'o' || a[i]== 'u'){
        concA = concA + a[i];
    }
}

//cout << "concA: " << concA << endl;
int tam2 = concA.size();

string concB;
for (int i=tam2-1; i>=0; i--){
    concB = concB + concA[i];
}
//cout << "concB: " << concB << endl;

if(concA == concB){
    cout << "S" << endl;
}else{
    cout << "N" << endl;
}
    return 0;
}