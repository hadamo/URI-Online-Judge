#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	string ent;
	while(cin >> ent){
		if(ent[0]=='-')
			break;
		if(ent[1]=='x'){
			x = stoi(ent,nullptr, 16);
			cout <<dec<< x<<"\n";
		}else{
			x = stoi(ent);
			cout <<"0x"<< uppercase<<hex <<x<<"\n";
		}
	}

}
