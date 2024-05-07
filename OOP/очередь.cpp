#include <iostream>

using namespace std;

template <class T>
class Queue {
private:
    T* Wait; // указатель на массив с очередью
    int MaxQueueLength; // максимальный размер очереди
    int QueueLength; // размер очереди
public:
    Queue(int m); // конструктор
    ~Queue(); // деструктор
    void Enqueue(T c); // добавить элемент в очередь
    T Dequeue(); // снять элемент с очереди
    bool IsEmpty(); // проверка на пустоту
    bool IsFull(); // проверка на заполнение
    int GetCount(); // количество элементов в очереди
    void Show(); // показать очередь
};
template <class T>
Queue<T>::Queue(int m) {
    MaxQueueLength = m; // задаем максимальный размер очереди
    QueueLength = 0; // задаем минимальный размер очереди
    Wait = new T[MaxQueueLength]; // создаем масив для очереди
}
template <class T>
Queue<T>::~Queue() { 
    delete[]Wait; // очищаем память под массив очереди
}

template <class T>
bool Queue<T>::IsEmpty() { 
    return QueueLength == 0; // проверка на пустоту
}

template <class T>
bool Queue<T>::IsFull() { 
    return QueueLength == MaxQueueLength;  // проверка на заполнение
}

template <class T>
void Queue<T>::Enqueue(T c) {
    if (!IsFull()) { 
        Wait[QueueLength++] = c; // ставим новый элемент следующим в очередь
    }
}
template <class T>
T Queue<T>::Dequeue() {
    if (!IsEmpty()) {
        T temp = Wait[0]; // сохраняем первый элемент во временную переменную
        for (int i = 1; i < QueueLength; i++) { // сдвигаем все позиции в очереди на одну вперед
            Wait[i - 1] = Wait[i];
        }
        QueueLength--; // убавляем счетчик количества элементов в очереди
        return temp;
    }
    else { 
        return -1; 
    }
}
template <class T>
int Queue<T>::GetCount() { 
    return QueueLength; // возвращаем количество элементов в очереди
}

template <class T>
void Queue<T>::Show() {
    cout << endl << "------------------------" << endl;
    for (int i = 0; i < QueueLength; i++) { // показываем все элементы в очереди
        cout << Wait[i] << " ";
    }
    cout << endl << "------------------------" << endl;
}
int main()
{
    int n;
    cout << "vvedite kol-vo el";
    cin >> n;
    Queue <int>QU(n);
    for (int i = 0; i < n; i++) {
        QU.Enqueue(rand() % (2 * n));
    }
    QU.Show();
    cout << QU.Dequeue();
    QU.Show();
    QU.Enqueue(10);
    QU.Enqueue(11);
    QU.Show();
    cout << QU.Dequeue();
    return 0;
}