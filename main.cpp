#include <iostream>
#include "AbstractType.h"
#include "ObjectClass.h"

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

    ObjectClass newObj_;
    newObj_.setVarx(5);
    newObj_.setVary(8);

    std::cout << newObj_.addFunction(newObj_.getVarx(), newObj_.getVary()) << std::endl;

    return 0;
}
