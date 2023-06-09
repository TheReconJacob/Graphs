template <typename T>
PriorityQueue<T>::PriorityQueue(int size) : size(size)
{
    data = new T*[size];
    count = 0;
}

template <typename T>
PriorityQueue<T>::~PriorityQueue()
{
}

template <typename T>
void PriorityQueue<T>::Insert(T* item)
{
    if (count == 0)
    {
        data[count++] = item;
    }
    else
    {
        int j;
        for (j = (count - 1); j >= 0; j--)
        {
            if (*item > *data[j])
            {
                data[j + 1] = data[j];
            }
            else
            {
                break;
            }
        }
        data[j + 1] = item;
        count++;
    }
}

template <typename T>
T* PriorityQueue<T>::Remove()
{
    return data[--count];
}

template <typename T>
T* PriorityQueue<T>::PeakMin()
{
    return data[count - 1];
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
int PriorityQueue<T>::Size()
{
    return size;
}