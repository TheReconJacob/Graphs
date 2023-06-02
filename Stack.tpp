template <class T>
Stack<T>::Stack(int maxSize) {
    this->maxSize = maxSize;
    stackData = new T * [maxSize];
    top = -1;
}

template<class T>
int Stack<T>::Count() {
    return top + 1;
}

template <class T>
void Stack<T>::Push(T* value) {
    stackData[++top] = value;
}

template <class T>
T* Stack<T>::Pop() {
    return stackData[top--];
}

template <class T>
T* Stack<T>::Peek() {
    return stackData[top];
}

template <class T>
bool Stack<T>::IsEmpty() {
    return (top == -1);
}

template <class T>
bool Stack<T>::IsFull() {
    return (top == maxSize - 1);
}