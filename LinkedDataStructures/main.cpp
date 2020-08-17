#include <iostream>

class Node {
private:
    int data; //data in the beginning node
    Node *next; //pointer to the next node

public:
    Node(int initdata) {
        data = initdata; //the initialized data is set as the head
        next = NULL; //the next node is set as NULL, as there is no next node yet.
    }

    int getData() { //function that return data of a given node.
        return data;
    }

    Node *getNext() {
        return next;
    }

    void setData(int newData) {
        data = newData;
    }

    void setNext(Node *newnext) {
        next = newnext;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    Node head = Node(93);
    std::cout << head.getData();
    std::cout << head.getNext();
    Node *temp2 = new Node(5);
    std::cout << temp2;
    head.setNext(temp2);
    std::cout << std::endl;
    std::cout << head.getNext()<< std::endl;
    std::cout << temp2->getNext()<< std::endl;
    while(1){
        std::cout << temp2->getNext()<< std::endl;

    }

    return 0;
}