(mbv Ayton)

Bull

- weight: int
- liftCapacity: int
- name: std::string

+ Bull(weight: int, liftingCapacity: int, name: std::string)
+ to_string(): std::string

------------------------------------------------------------

Node

- data: Bull*
- next: Node*

Node(data: Bull*)

------------------------------------------------------------

LinkedList 

+ get(index: int) -> throws indexoutofrangeException
+ to_string()




Node first(0);
Node second(1);
Node third(2);

second.set_next(&third);
first.set_next(&second);

0 => 1 => 2 => nullptr (no data)


print maken print(Node * node)

![printlistofbulls](img/uitprinten.png)

Class linkedlist

Linkedlist

    - head: * Node
    
    + print()
    + add()
    + reverse() optioneel

add method
reverse method (optioneel)