#include <iostream>
#include "QueueException.h"

template<typename T>
class Queue
{
public:
  Queue(int size)
  :currentSize(0),
  maxSize(size)
  {
    myQueue = new T[size];
  }

  ~Queue()
  {
  }

  void push(T input)
  {
    if(currentSize == maxSize)
    {
      throw new QueueFull;
    }

    myQueue[currentSize] = input;
    currentSize++;
  }

  T pop()
  {
    if(currentSize == 0)
    {
      throw new QueueEmpty;
    }
    T tempValue = myQueue[0];
    for(int i = 0; i < currentSize; i++)
    {
      myQueue[i] = myQueue[i + 1];
    }
    currentSize--;
    return tempValue;
  }

  bool isEmpty()
  {
    if( currentSize == 0 )
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  T at(int location)
  {
    if(location > currentSize || location < 0)
    {
      throw new MissingElement;
    }
    return myQueue[location];
  }

  int size()
  {
    return currentSize;
  }

template <typename T2>
void operator =(Queue<T2>& inQueue)
{
  if(inQueue.size() <= maxSize)
  {
     for(int i = 0; i < inQueue.size(); i++)
    {
       myQueue[i] = inQueue.at(i);
    }
  }
}

private:
  int currentSize;
  int maxSize;
  T* myQueue;
};