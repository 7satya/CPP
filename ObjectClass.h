//
// Created by satya~MACBOOK on 07/07/21.
//

#ifndef CPP_OBJECTCLASS_H
#define CPP_OBJECTCLASS_H


class ObjectClass {
private:
    int varx, vary;

public:
    ObjectClass();

    void setVarx(int varx);

    void setVary(int vary);

    int getVarx() const;

    int getVary() const;

    static int addFunction(int x, int y);

public:
    virtual ~ObjectClass();
};


#endif //CPP_OBJECTCLASS_H
