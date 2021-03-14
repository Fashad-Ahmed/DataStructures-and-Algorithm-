#include <iostream>
#include <string>
using namespace std;
int INDEX = 0;
int INDEX_A(string T, string P) {

	size_t found = T.find(P);
	cout << found << endl;
	if (found == string::npos) {
		cout << "Occurence not found." << endl;
	}
	return 0;
}
string DeleteAndInsert(string x,string y,int a, int b) {
	x.erase(a, b);
    x.insert(a, y);
	cout << x << endl;
	return x;
	}
	
string REPLACE(string T, string P, string Q)
{
	int N = T.length();
	int M = P.length();
	int Z = Q.length();
	INDEX = INDEX_A(T, P);
	DeleteAndInsert(T,Q, INDEX, M);
	return T;
}

int main() {
	string T;
	string P;
	string Q ;
	cout << "enter T: " << endl;
	fflush(stdin);
	getline(cin,T);
	fflush(stdin);
    cout << "enter P: " << endl;
    fflush(stdin);
	getline(cin,P);
	fflush(stdin);
    cout << "enter Q: " << endl;
    fflush(stdin);
	getline(cin,Q);
	fflush(stdin);
	REPLACE(T, P, Q);
	return 0;
}











































































//#include <iostream>
//using namespace std;
////void REPLACE(string, string, string);
////void INDEX_A(string,  string);
//
//int INDEX_A(string T,string P) {
//
//    int INDEX;
//	int N=T.length();
//	int M=P.length();
//	int MAX=N-M+1;
//	int K=0;
//    while(K<=MAX)
//	{
//	 int L;	
//	 for( L=0;L<M;L++)
//    	{if (P[L]!=T[K+L-1])
//    	 {
//    	  break;	
//		 }
//		}
//	 if (L==M)
//		{
//		 INDEX=K;	
//		}
//	 else
//	 {
//	 	INDEX=0;
//	 }
//     K=K+1;		
//    }
//	return INDEX;
//
//}
//int REPLACE(string T,string P,string Q)
//{  
////	 int X = 0;
////	 int T;
//	 int K;
////	 int INDEX;
//	 K = INDEX_A(T,P);
////	 K = INDEX;
//	 while (K != 0) {
//	 	T = REPLACE(T, P ,Q);
//	 	K = INDEX_A(T, P);
//	 }
//	 
//	 return T;
//}
//
//
//int main () {
//	string P="ABCDEFG";
//	string T="D";
//	string Q = "G";
//	REPLACE(T, P, Q);
//	
//	return 0;	
//}
//
//

