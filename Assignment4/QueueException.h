class QueueException
{
public:
  QueueException(){};

  virtual const char* GetDescription() const throw();
};

class QueueEmpty: public QueueException
{
public:
  QueueEmpty(){};
  const char* GetDescription() const throw();

};

class QueueFull: public QueueException
{
public:
  QueueFull() {};

  const char* GetDescription() const throw();

};

class MissingElement: public QueueException
{
public:
  MissingElement() {};

  const char* GetDescription() const throw();
};