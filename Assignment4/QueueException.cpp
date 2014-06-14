#include "QueueException.h"

const char* QueueException::what() const throw()
{
  return "Operation failed. An exception has been caught.\n";
}

const char* QueueEmpty::what() const throw()
{
  return "Operation failed. The queue is empty.\n";
}

const char* QueueFull::what() const throw()
{
  return "Operation failed. The queue is full.\n";
}

const char* MissingElement::what() const throw()
{
  return "Operation failed. Could not find element in the queue.\n";
}