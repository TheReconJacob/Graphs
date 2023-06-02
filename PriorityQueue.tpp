template <typename T>
PriorityQueue<T>::PriorityQueue(int size)
{
    data = new T[size];
    count = 0;
}

template <typename T>
void PriorityQueue<T>::Insert(T item)
{
    if (IsEmpty())
    {
        data[0] = item;
        count++;
    }
    else
    {
        int i;
        for (i = count - 1; i >= 0; i--)
        {
            if (item > data[i])
                data[i + 1] = data[i];
            else
                break;
        }
        data[i + 1] = item;
        count++;
    }
}

template <typename T>
bool PriorityQueue<T>::IsEmpty()
{
    return count == 0;
}

template <typename T>
bool PriorityQueue<T>::IsFull()
{
    return count == size;
}

template <typename T>
T PriorityQueue<T>::PeakMin()
{
    return data[count - 1];
}

template <typename T>
T PriorityQueue<T>::Remove()
{
    count--;
    return data[count];
}

template <typename T>
int PriorityQueue<T>::Size()
{
    return count;
}