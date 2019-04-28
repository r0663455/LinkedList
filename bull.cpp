#include "bull.h"

Bull::Bull(int weight, int liftCapacity, std::string name) {
    this->weight = weight;
    this->liftCapacity = liftCapacity;
    this->name = name;
}

std::string Bull::to_string() {
    return "name: " + name + ", liftingcapacity: " + std::to_string(liftCapacity) + ", weight: " + std::to_string(weight);
}