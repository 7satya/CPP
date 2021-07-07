//
// Created by satya~MACBOOK on 07/07/21.
//

#ifndef CPP_ABSTRACTTYPE_H
#define CPP_ABSTRACTTYPE_H


#include <string>

class AbstractType {
public:
    std::string geekname;
    std::string message;

    AbstractType();

    void setGeekname(const std::string &geekname);

    const std::string &getGeekname() const;

    virtual ~AbstractType();

    virtual void setMessage(std::string message);
};


#endif //CPP_ABSTRACTTYPE_H
