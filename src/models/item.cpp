#include "item.h"

#include <iostream>

void Item::func()
{
    std::cout << "item::func\n";
}

Item CreateItem()
{
    return Item();
}
