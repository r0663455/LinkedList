#include <iostream>
#include <string>
#include "node.h"
#include "bull.h"
#include "linkedlist.h"

using namespace std;

//print maken print(Node * node)

//geeft data uit nodes zolang deze data bevatten, stopt met lopen wnr geen data meer
void print(Node * node) {
    while(node != nullptr) {
        cout << node -> get_data() << " " << endl;
        node = node -> get_next();                    //verwijzen naar volgende node
    }
}

int main(void) {
    // weight, liftcapacity, name
    Bull firstBull(10000, 30000, "Ronny");

    cout << firstBull.to_string() << endl;

    Node first(0);
    Node second(1);
    Node last(2);

    first.set_next(&second);
    second.set_next(&last);

    print(&first);


    Linkedlist list;

    list.add(10);
    list.add(56);
    list.add(800);
    list.add(5600);

    cout << list.print() << endl;
    cout << list.length() << endl;

}