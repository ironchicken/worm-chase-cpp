#ifndef REACTIVE_H
#define REACTIVE_H

#include "Types.hpp"

class Reactive {
public:
    virtual void handleEvent(const Event& event) = 0;
};

#endif
