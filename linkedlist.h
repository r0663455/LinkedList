#pragma once
#include "node.h"
#include <string>

class Linkedlist {
    public:
        ~Linkedlist();

    public:
        void add(int data);
        std::string print();
        int length();

    private:
        Node * first = nullptr;
        Node * previous = nullptr;
        Node * next = nullptr;
        int data;   
};