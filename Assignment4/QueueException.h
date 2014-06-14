class QueueException
{
public:
  QueueException(){};

  virtual const char* what() const throw();
};

class QueueEmpty: public QueueException
{
public:
  QueueEmpty(){};
  const char* what() const throw();

};

class QueueFull: public QueueException
{
public:
  QueueFull() {};

  const char* what() const throw();

};

class MissingElement: public QueueException
{
public:
  MissingElement() {};

  const char* what() const throw();
};