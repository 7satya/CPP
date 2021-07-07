#include <iostream>
#include "AbstractType.h"

class Book {
  public:
    void message() {
      std::cout << "This is the Book class " << std::endl;
    }
};

int main() {
    AbstractType obj;
    obj.setGeekname("satya");

    std::cout << obj.getGeekname() << std::endl;
    obj.setMessage("Hello satya!");

    return 0;
}
