#include <iostream>
#include <string>
using namespace std;

//	CREATING A NODE
struct node{
	string data;
	node *next;
};

//	GENERATING LINKED LIST
class linkedList{
	private:
		node *head, *tail;
	
	public:
		
		//	USING CONSTRUCTOR TO AVOID GARBAGE VALUE
		linkedList(){
			head = NULL;
			tail = NULL;
		}
		
		//	TO CREATE A NODE
		void makeNode(string item){
			node *x = new node;
			x->data = item;
			x->next = NULL;
			
			if(head == NULL){
				head = x;
				tail = x;
				x = NULL;
				return;
			}
			
			tail->next = x;
			tail = x;
		}
		
		//	TO INSERT A NODE
		void insertNode(string data, int loc){
			node *y = new node;
			y->data = data;
			y->next = NULL;
			
			if(loc == 1){
				y->next = head;
				head = y;
				return;
			}
			
			node *z = head;
			for(int i=0; i<loc-2; i++){
				z = z->next;
			}
			y->next = z->next;
			z->next = y;
		}
		
		//	TO DELETE A NODE AT END
		void deleteNode(){
			node *point = new node;
			node *prev  = new node;
			
			point = head;
			while(point->next != NULL){
				prev = point;
				point = point->next;
			}
			tail = prev;
			prev->next = NULL;
			delete point;
		}
		
		//	TO DISPLAY LINKED LIST
		void displayContent(){
			node *temp = head;
			while(temp != NULL){
				cout << " " << temp->data;
				temp = temp->next;
			}
	cout << "\n";
	}
	
};

int main(){
	cout << "\n \t --------------------------WELCOME TO MOBILE PURCHASING SYSTEM -------------------------- " << endl;
	
	linkedList per;
	
	cout << "\n \t ---------------- CREATING 5 NODES ----------------" << endl;
	per.makeNode("S7 Edge"); 	//		MODEL NUMBER
	per.makeNode("Samsung"); 	//		COMPANY NAME
	per.makeNode("8 GB RAM");	//		RAM
	per.makeNode("128 GB");		//		STORAGE
	per.makeNode("2016");		//		YEAR
	
	per.displayContent();
	cout << endl;
	
	cout << "\n \t ---------------- INSERTING NODE AT 3rd POSITION ----------------" << endl;
	per.insertNode("1 Lac PKR", 3);		// PRICE 
	per.displayContent();
	cout << endl;
	
	cout << "\n \t ---------------- DELETETING NODE  ----------------" << endl;
	per.deleteNode();
	per.displayContent();
	
	cout << endl;
	char select;
	cout << "If you want to exit, click E: " << endl;cin >> select;
	if(select == 'e' || select == 'E'){
		cout << "\n \t  -------------------------- THANK YOU FOR VISITING -------------------------- " << endl;
	}
	
	return 0;
}
