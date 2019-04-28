#include "node.h"

//this solution with data - Other possibility (Node::Node(Bull * bull) with #include "bull.h" in node.h)
Node::Node(int data) {
    this -> data = data;
    set_next(nullptr);   //only usable when methode set_next is made, othewise use "this -> nextNode = nullptr;"
    
}

void Node::set_next(Node * node) {
    this->nextNode = node;
}

Node * Node::get_next() {
    return nextNode;
}

int Node::get_data() {
    return data;
}