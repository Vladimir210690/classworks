#include <iostream>

using namespace std;

class Stack {
private:
    enum { EMPTY = -1, FULL = 20 };
    char st[FULL + 1];
    int top;
public:
    Stack();
    void Push(char c);
    char Pop();
    int GetCount(); //kol-vo
    void Clear();
    bool IsEmpty();
    bool IsFull();
    char Pop_verh();
};
Stack::Stack() { top = EMPTY; }
void Stack::Clear() { top = EMPTY; }
bool Stack::IsEmpty() { return top == EMPTY; }
bool Stack::IsFull() { return top == FULL; }
int Stack::GetCount() { return top + 1; }
void Stack::Push(char c) { if (!IsFull()) { st[++top] = c; } }
char Stack::Pop() {
    if (!IsEmpty()) { return st[top--]; }
    else return 0;
}
char Stack::Pop_verh() {
    if (!IsEmpty()) { return st[top]; }
    else return 0;
}

int main()
{
    srand(time(0));
    Stack ST;
    char c;
    while (!ST.IsFull()) {
        c = rand() % 4 + 2;
        cout << c << " ";
        ST.Push(c);
    }
    cout << endl;
    while (c = ST.Pop()) {
        cout << c << " ";
    }
    cout << endl;

    ST.Push('a');
    ST.Push('b');
    ST.Push('c');
    c = ST.Pop_verh();
    cout << c << endl;
    while (c = ST.Pop()) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}