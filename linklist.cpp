#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int value){
		data=value;
		next=NULL;
	}
};
class List{public:
	Node* head;
	list(){
		head=NULL;
	}
	void addNode(int value){
		Node* newNode=new Node(value);
		
		if(head==NULL){
			head=newNode;
		}
		else{
			Node* temp=head;
			while(temp->next != NULL){
				temp=temp->next;
			}
			temp->next=newNode;
		}
	}
	void display(){
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"-";
			temp=temp->next;
		}
		cout<<endl;
	}
	
};

int main(){
	List l1;
	l1.addNode(5);
	l1.addNode(10);
	l1.addNode(15);
	l1.addNode(20);
	l1.display();
	
}
