
#include<iostream>

class Node
{
public:
    int data  ;
    Node* next;

};

void print_list(Node *n)
{

    while ( n != nullptr)
    {
        std::cout  << n->data << " " ;
        n = n->next ;
    }
    


}

void push( Node ** head_ref, int new_data)
{
    Node* new_node = (Node*)malloc( sizeof(Node) ) ;
    new_node->data = new_data    ;
    new_node->next = (*head_ref) ;
    (*head_ref) = new_node ;

}

void append( Node **head_ref, int new_data)
{
    Node* new_node  = (Node*)malloc( sizeof(Node) );
    Node* last_node = *head_ref;

    new_node->data = new_data;
    new_node->next = nullptr ;

    while ( last_node->next != nullptr)
    {
        last_node = last_node->next;
    }

    last_node->next = new_node;
 
}

int main()
{

    Node* head   = nullptr;
    Node* second = nullptr; 
    Node* third  = nullptr;

    head   = new Node();
    second = new Node();
    third  = new Node();
    

    head->data = 1;
    head->next = second ;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    //print_list(head);
    push(&head, 98);
    append(&head,44);
    print_list(head);

   
}