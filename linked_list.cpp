#include <iostream> 
using namespace std;

struct Node { //Один узел связанного списка представляет из себя поле с данными и указатель на следующий такой же узел 
	int data;
	Node* next;
};

struct LinkedList { //создаем структуру связанного списка состоящую из указателя на первый узел и размерность списка 
	Node* first;
	int size;
};

void push_front(LinkedList* lst, int what) { //функция добавления int(what) в начало связанного списка (lst) 
	Node* node = new Node; //создаем динамически один элемент типа Node 
	node->data = what; //добавляем данные в поле data нового узла 
	node->next = lst->first; //Новый элемент ссылаеться на предыдущий первый элемент в списке 
	lst->first = node; //Новым первым элементом стоновиться наш новый узел 
	lst->size++; //Увеличиваем счетчик на 1  
}

void print(LinkedList* lst) {
	Node* node = lst->first; //создаем указатель и присваиваем ему адрес начала списка 
	while (node != nullptr) {
		cout << node->data << " "; //выводим информацию из поля data узла 
		node = node->next; //переприсваиваем указатель на следующий узел 
	}
}

int main()
{
	LinkedList mylist; // создаем связанный список с именем mylist 
	mylist.size = 0; // список пуст, поэтому присваиваем полю размерности 0 
	mylist.first = nullptr; // список пуст, поэтому присваиваем указателю первого элемента nullptr 
	push_front(&mylist, 256); // один вызов добавления числа 256 в структуру связанного списка mylist 
	push_front(&mylist, 125);
	push_front(&mylist, 330);
	push_front(&mylist, 140);
	push_front(&mylist, 456);
	print(&mylist); //функция печати связанного листа 

	return 0;
}