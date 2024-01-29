#include <iostream>

using namespace std;

struct Node {
	int date;
	Node* next;
};

struct List {
	int size;
	Node* first;
};

void push_front(List* lst, int date) {
	Node* node = new Node;
	node->date = date;
	node->next = lst->first;
	lst->first = node;
	lst->size++;
}

void push_back(List* lst, int date) {
	
	Node* ptr = lst->first;
	if (ptr == nullptr) {
		push_front(lst, date);
	}
	else {
		while (ptr->next != nullptr) {
			ptr = ptr->next;
		}
		Node* node = new Node;
		node->date = date;
		node->next = nullptr;
		ptr->next = node;
		lst->size++;
	}

	
	
}

void print(List* lst) {
	Node* pntr = lst->first;
	while (pntr != nullptr) {
		cout << pntr->date << endl;
		pntr = pntr->next;
	}
}

int main() {

	List head;
	head.size = 0;
	head.first = nullptr;

	push_front(&head, 45);
	push_front(&head, 32);
	push_front(&head, 17);
	push_back(&head, 9);

	print(&head);

	return 0;
}
