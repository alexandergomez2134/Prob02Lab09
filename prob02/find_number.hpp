#include <iostream>
#include <string>

class Numbers
{
private:

  int* values_;
  int capacity_;
  void init();

public:

  Numbers(): values_(new int[10]) , capacity_(10) { init(); }

  Numbers(int capacity): capacity_(capacity) { init(); }

  ~Numbers()
  {
    delete [] values_;
    values_ = nullptr;
  }

  int capacity() { return capacity_; }

  void display_array()
  {
    for (int i = 0; i < capacity_; i++)
    {
      std::cout << *(values_ + i) << " ";
      
    }
  }

  void find_number(int num)
  {
    for (int i = 0; i < capacity_; i++)
    {
      if (*(values_ + i) == num)
      {
        std::cout << std::endl << num << " is in the array";
      }

    }
  }
};
