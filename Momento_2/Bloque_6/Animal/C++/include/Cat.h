#ifndef CAT_H
#define CAT_H

#include "Mammal.h"

class Cat : public Mammal
{
private:
public:
    Cat();
    Cat(std::string name);

    std::string toString() const;
};

std::ostream &operator<<(std::ostream &os, const Cat &cat);

#endif // CAT_H