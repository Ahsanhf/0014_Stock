#include <iostream>

using namespace std;

//Node class representing a single node in the linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

//stack class
class Stack {
private:
	top = NULL; //Intialize the stack with a null top pointer
}
public:
Stack() {
	top = NULL; //Intialize the stack with a null top pointer
}

//Push operation: insert an element onto the top of the stack
int push(int value) {
	Node* newNode = new Node(); //1.Allocate memory forr the new node
	newNode->data = value; //2.assign value
	newNode->next = top; //3.Set the next pointer of the new node to the current top node
	top = newNode; //4.Update the top pointer to the new node
	cout << "Push value: " << value << endl;
	return value;
}

//Push operation: Remove the topmost element from the stack
void pop() {
	if (isEmpty()) {
		cout << "Stack is empty." << endl;
	}
	cout << "Popped value: " << top->data << endl;
	top = top->next; //Update the top pointer to the next node

}

//Peek/Top operation: retrieve the value of the topmost element without removing it 
void peek() {
	if (top == NULL) {
		cout << "List is empty." << endl;
	}
	else {
		Node* current = top;
		while (current != NULL) {
			cout << current->data << " " << endl;
			current = current->next;
		}
		cout << endl;
	}//Return the value of the top node
}

//IsEmppty operation: Check if the stack is empty
bool isEmpty() {
	return top == NULL; //Return true if the top pointer is NULL, indicating an empty stack
}

};

int main() {
	Stack stack;

	int choice = 0;
	int value;

	while (choice != 5) {
		cout << "1.Push\n";
		cout << "2.Pop\n";
		cout << "3.Peek\n";
		cout << "4.Exit\n";
		cout << "Enter  your choice: ";
		cin >> choice;