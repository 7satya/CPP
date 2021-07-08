//
// Created by satya~MACBOOK on 07/07/21.
//

#include "ObjectClass.h"


ObjectClass::~ObjectClass() {

}


ObjectClass::ObjectClass() : varx(varx), vary(vary) {
    varx = 10;
    vary = 20;
}

void ObjectClass::setVarx(int varx) {
    ObjectClass::varx = varx;
}

void ObjectClass::setVary(int vary) {
    ObjectClass::vary = vary;
}

int ObjectClass::getVarx() const {
    return varx;
}

int ObjectClass::getVary() const {
    return vary;
}

int ObjectClass::addFunction(int x, int y) {
    return x+y;
}
