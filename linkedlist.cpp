#include <iostream>

struct node{
  int data;
  node *next;
};

class list{
private:
  node *head, *tail;
public:
  list(){
    head = NULL;
    tail = NULL;
  }

  void createnode(int value){ //create at end
    node *temp = new node;
    temp -> data = value;
    temp -> next  = NULL;
    if (head == NULL){
      head = temp;
      tail = temp;
      temp = NULL;
    } else{
      tail -> next = temp;
      tail = temp;
    } // end if else
  } //end createnode

  void display(){
    node *temp = new node;
    temp = head;
    while (temp != NULL){
      std::cout << temp->data << ' ';
      temp = temp->next;
    } //end while loop
  }// end display

  void insert_start(int value){
    node *temp = new node;
    temp -> data = value;
    temp -> next = head;
    head = temp;
  } //end insert start

  void insert_position(int pos, int value){
    node *previous = new node;
    node *current = new node;
    node *temp = new node;
    current = head;
    for (int i = 1; i < pos; i++){
      previous = current;
      current = current -> next;
    }
    temp -> data = value;
    previous -> next = temp;
    temp -> next = current;
  } //end insert position

  void delete_first(){
    node *temp = new node;
    temp = head;
    head = head -> next;
    delete temp;
  } //end delete_first

  void delete_last(){
    node *current = new node;
    node *previous = new node;
    current = head;
    while (current-> next != NULL){
      previous = current;
      current = current -> next;
    }
    tail = previous;
    previous -> next = NULL;
    delete current;
  }//end delete_self

  void delete_position(int pos){
    node *current = new node;
    node *previous = new node;
    current = head;
    for (int i = 1; i < pos; i++){
      previous = current;
      current = current -> next;
    }
    previous -> next =  current -> next;
    delete current;
  }
}; //end class

int main(){
  list obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	std::cout<<"\n--------------------------------------------------\n";
	std::cout<<"---------------Displaying All nodes---------------";
	std::cout<<"\n--------------------------------------------------\n";
	obj.display();
	std::cout<<"\n--------------------------------------------------\n";
	std::cout<<"-----------------Inserting At End-----------------";
	std::cout<<"\n--------------------------------------------------\n";
	obj.createnode(55);
	obj.display();
	std::cout<<"\n--------------------------------------------------\n";
	std::cout<<"----------------Inserting At Start----------------";
	std::cout<<"\n--------------------------------------------------\n";
	obj.insert_start(50);
	obj.display();
	std::cout<<"\n--------------------------------------------------\n";
	std::cout<<"-------------Inserting At Particular--------------";
	std::cout<<"\n--------------------------------------------------\n";
	obj.insert_position(5,60);
	obj.display();
	std::cout<<"\n--------------------------------------------------\n";
	std::cout<<"----------------Deleting At Start-----------------";
	std::cout<<"\n--------------------------------------------------\n";
	obj.delete_first();
	obj.display();
	std::cout<<"\n--------------------------------------------------\n";
	std::cout<<"-----------------Deleing At End-------------------";
	std::cout<<"\n--------------------------------------------------\n";
	obj.delete_last();
	obj.display();
	std::cout<<"\n--------------------------------------------------\n";
	std::cout<<"--------------Deleting At Particular--------------";
	std::cout<<"\n--------------------------------------------------\n";
	obj.delete_position(4);
	obj.display();
	std::cout<<"\n--------------------------------------------------\n";
	return 0;
}
