//============================================================================
// Name        : 07.cpp
// Author      : Ak0s
//============================================================================

//Create a simple class template which contains 2 item and has both a get and a set method for these!

#include <iostream>
#include <string>

using namespace std;

template <class T1, class T2>
class Item_Holder {
  private:
    T1 item1;
    T2 item2;
  public:
    T1 get_item1();
    T2 get_item2();
    void set_item1(T1);
    void set_item2(T2);
};

template <class T1, class T2>
void Item_Holder<T1,T2>::set_item1(T1 item1) {
  this->item1 = item1;
}

template <class T1, class T2>
void Item_Holder<T1,T2>::set_item2(T2 item2) {
  this->item2 = item2;
}

template <class T1, class T2>
T1 Item_Holder<T1,T2>::get_item1() {
  return item1;
}

template <class T1,class T2>
T2 Item_Holder<T1,T2>::get_item2() {
  return item2;
}

int main() {
  Item_Holder<double,char> test;
  test.set_item1(3.14);
  test.set_item2('a');

  cout << test.get_item1() << endl;
  cout << test.get_item2() << endl;
  return 0;
}
