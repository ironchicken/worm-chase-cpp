#ifndef HAS_POSITION_H
#define HAS_POSITION_H

template <class T>
class HasPosition {
public:
    virtual T getX() = 0;
    virtual T getY() = 0;
};

#endif
