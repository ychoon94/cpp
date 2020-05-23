#include <iostream>
#include <cstdlib>
#include <ctime>

struct node {
        int data;
        node *next;
};

class list {
private:
node *head, *tail;
public:
list(){
        head = NULL;
        tail = NULL;
}

void createnode(int value){   //create at end
        node *temp = new node;
        temp->data = value;
        temp->next  = NULL;
        if (head == NULL) {
                head = temp;
                tail = temp;
                temp = NULL;
        } else{
                tail->next = temp;
                tail = temp;
        } // end if else
}   //end createnode

void insert_position(int pos, int value){
        node *previous = new node;
        node *current = new node;
        node *temp = new node;
        current = head;
        for (int i = 1; i < pos; i++) {
                previous = current;
                current = current->next;
        }
        temp->data = value;
        previous->next = temp;
        temp->next = current;
}   //end insert position

void Display_Distinction(){
        node *temp = new node;
        temp = head;
        while (temp!=NULL) {
                if (temp->data >= 70) {
                        std::cout << temp->data << ' ';
                        temp = temp->next;
                }else {
                        temp = temp->next;
                }
        }
}
}; //end class

int main(){
        list obj;
        int min = 50;

        srand(time(0));

        for (int i = 0; i < 20; i++) {
                //make sure random range is between
                //50 - 100
                obj.createnode(min  + (rand() % (50)));
        }
        std::cout<<"\n--------------------------------------------------\n";
        std::cout<<"----------Displaying Distinction only-------------";
        std::cout<<"\n--------------------------------------------------\n";
        obj.Display_Distinction();
        std::cout<<"\n--------------------------------------------------\n";

        return 0;
}
