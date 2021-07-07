//
// Created by satya~MACBOOK on 07/07/21.
//

#include "AbstractType.h"


void AbstractType::setGeekname(const std::string &geekname) {
    AbstractType::geekname = geekname;
}

const std::string &AbstractType::getGeekname() const {
    return geekname;
}

AbstractType::AbstractType() {}

AbstractType::~AbstractType() {

}

void AbstractType::setMessage(std::string message) {
    message = message;
}
