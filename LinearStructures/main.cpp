#include <iostream>
#include <stack>
#include <string>
#include <mach/port.h>
#include <queue>
#include <deque>


bool parChecker(std::string symbolString) {
    std::stack<std::string> s;
    bool balanced = true;
    int index = 0;
    int str_len = symbolString.length();

    while (index < str_len && balanced) {
        std::string symbol;
        symbol = symbolString[index];
        if (symbol == "(") {
            s.push(symbol); //pushes the open parentheses to the stack.
        } else {
            if (s.empty()) { //if there is no open parentheses in the stack,
                //the closing parentheses just found makes the string unbalanced.
                balanced = false;
            } else { //if there is an open parentheses in the stack,
                //the closing parentheses just found has a matching open parentheses.
                s.pop();
            }
        }
        index = index + 1;
    }

    if (balanced && s.empty()) { //if the string is balanced and there are no
        //remaining open parentheses.
        return true;
    } else {
        return false;
    }
}

int main() {
    std::stack<int> newStack;
    std::queue<int> newQueue;

    newStack.push(3); //Adds 3 to the stack
    newStack.push(8);
    newStack.push(15);

    // returns a boolean response depending on if the stack is empty or not
    std::cout << "Stack Empty? " << newStack.empty() << std::endl;

    // returns the size of the stack itself
    std::cout << "Stack Size: " << newStack.size() << std::endl;

    // returns the topmost element of the stack
    std::cout << "Top Element of the Stack: " << newStack.top() << std::endl;

    // removes the topmost element of the stack
    newStack.pop();

    std::cout << "Top Element of the Stack: " << newStack.top() << std::endl;

    std::cout << "Stack Size: " << newStack.size() << std::endl;

    std::cout << parChecker("((()))") << std::endl;
    std::cout << parChecker("(()") << std::endl;

    newQueue.push(3);
    newQueue.push(8);
    newQueue.push(15);

    std::cout << "Queue Empty? " << newQueue.empty() << std::endl;

    std::cout << "Queue Size: " << newQueue.size() << std::endl;

    std::cout << "Top Element of the Queue: " << newQueue.front() << std::endl;

    newQueue.pop();

    std::cout << "Top Element of the Queue: " << newQueue.front() << std::endl;


    std::deque<std::string> d;
    std::cout << "Deque Empty? " << d.empty() << std::endl;
    d.push_back("Zebra");
    std::cout << "Deque Empty? " << d.empty() << std::endl;

    d.push_front("Turtle"); //pushes to the front of the deque.
    d.push_front("Panda");
    d.push_back("Catfish"); //pushes to the back of the deque.
    d.push_back("Giraffe");

    std::cout << "Deque Size: " << d.size() << std::endl;
    std::cout << "Item at the front: " << d.front() << std::endl;
    std::cout << "Item at the back: " << d.back() << std::endl;

    std::cout << std::endl << "Items in the Deque: " << std::endl;
    int dsize = d.size();
    for(int i = 0; i < dsize; i++){
        //prints each item in the deque.
        std::cout << d.at(i) << " ";
    }

    std::cout << std::endl;

    d.pop_back();
    d.pop_front();

    std::cout << std::endl << "Item at the front: " << d.front() << std::endl;
    std::cout << "Itm at the back: " << d.back() << std::endl;
    std::cout << "Deque Size: " << d.size() << std::endl;

    std::cout << std::endl << "Items in the Deque: " << std::endl;
    int dsize2 = d.size();
    for(int i = 0; i < dsize2; i++) {
        //prints each item in the deque.
        std::cout << d.at(i) << " ";

    }

        return 0;
}