// linkedListPopQuiz.cpp
// dH 9/17/25
// class-built linked list program


// This program will create a linked list using a struct
// that contains a char and a pointer
// The linked list will contain all the chars in a string named: myStr with "abcDefg"
// output will be the contents of myStr in natural (original) order and in reversed order.

#include <iostream>
#include <string>

using namespace std;

// Create the struct
struct node {
    char data;
    node* next;
};


int main() {

    cout << "\n Welcome to My Linked List! \n";

    // Create a string named myStr
    string myStr = "abdDefg";

    // test our struct
    // create a pointer named head
    node* pHead = nullptr;

    // create a new node named node
    node* pNew = new node();
    pNew->data = myStr[0];
    pNew->next = nullptr;

    // Output what is in our node
    cout << "\n output of data and next:\n";
    cout << pNew->data << endl;
    cout << pNew->next << endl;

    // Anthony will create our linked list.
    pHead = pNew;

    // Verify this with output
    cout << "\n output of the node that pHead is pointing to\n";
    cout << pHead->data << endl;
    cout << pHead->next << endl;

    // Add a node to our linked list using our four steps
    // Create a new node
    pNew = new node();
    // Fill the data field
    pNew->data = myStr[1];
    pNew->next = nullptr;
    // Attach new node to head of list
    pNew->next = pHead;
    // Reposition head of list
    pHead = pNew;


    // output our linked list:
    cout << "\n The linked list\n";

    cout << "\n The current linked list: \n";
    cout << pHead->data << endl;
    cout << pHead->next->data << endl;

    cout << "\n End of the list!";

    return 0;
}