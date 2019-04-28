#include "linkedlist.h"
#include <iostream>

Linkedlist::~Linkedlist() {
    std::cout << "Object is deleted";
}

void Linkedlist::add(int data) {
    Node * addNode = new Node(data);

    if (first == nullptr) {         //Bij lege node -> hernoemen en vullen met met data
        first = addNode;
    } else {
        addNode -> set_next(first);   //Wnr node = !leeg -> nieuwe aanmaken
        first = addNode;
    }
}

std::string Linkedlist::print(){

    Node * returnNode = first;
    std::string output;

    while(returnNode != nullptr) {
        output += std::to_string(returnNode -> get_data()) + ", ";
        returnNode = returnNode -> get_next();                    //verwijzen naar volgende node
    }
        return output;
}

int Linkedlist::length() {
    int length = 0;
    Node * node = first;
    while(node != nullptr) {
        length++;
        node = node -> get_next();
    }
    return length;

}