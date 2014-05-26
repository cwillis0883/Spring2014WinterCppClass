#include "QueueException.h"

inline const char* QueueException::GetDescription() const throw()
{
  return "an exception was raised!";
}
inline const char* QueueEmpty::GetDescription() const throw()
{
  return "Queue is empty";
}

inline const char* QueueFull::GetDescription() const throw()
{
  return "Queue is full";
}

inline const char* MissingElement::GetDescription() const throw()
{
  return "Could not find element";
}