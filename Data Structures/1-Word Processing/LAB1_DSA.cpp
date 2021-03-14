#include <iostream>
#include <conio.h>
using namespace std;

void INSERT(string T, int R, string P) {
	string Temp1 = T.substr(0, R-1);
	string Temp2 = T.substr(R, (T.length())-R+1);
	Temp1 = Temp1.append(P);
	Temp1.append(Temp2);
	T = Temp1;
	cout << "After Insertion" << endl;
	cout << T << endl;
}

void DELETE(string T, int R, int L) {
	string temp1 = T.substr(0, R-1);
	string temp2 = T.substr(R+L, (T.length())-R-L+1);
	T = temp1.append(temp2);
	cout << "After Deletion" << endl;
	cout << T << endl; 
} 

int main() {
	
	string T;
	string P;
	int R;	
	int L;
	 
	cout << "Enter string: " << endl;
	fflush(stdin);
	getline(cin,T);
	fflush(stdin);
	
	cout << "Enter string to insert: " << endl;
	fflush(stdin);
	getline(cin,P);
	fflush(stdin);
	

	
	INSERT(T, R, P);
	DELETE(T, R, L);
	
	return 0;
}
