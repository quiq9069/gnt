#include "model.h"

#include <iostream>

void Model::bar()
{
    std::cout << "model::bar\n";
}

Model CreateModel()
{
    return Model();
}
