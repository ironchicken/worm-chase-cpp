#ifndef MOVABLE_H
#define MOVABLE_H

#include "Types.hpp"

template <class T>
class Movable {
public:
    virtual void move(const Vec<T>& v) = 0;
};

#endif
