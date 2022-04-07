#pragma once

#define NULL 0x0

template <typename T>
void swap(T& lhs, T&rhs)
{
    T a = lhs;
    lhs = rhs;
    rhs = a;
}
template <typename T>
class list
{
    public:
         struct Node
        {
            T value;
            Node* next;
        };
    public:   
        list();
        ~list();
        void addValue(T value);
        Node* getBegin() { return begin; };
       
    private:
        Node* begin;
        Node* end;
};

template<typename T>
list<T>::list()
: begin(NULL)
, end(NULL)
{ }

template<typename T>
list<T>::~list()
{
    if (begin == NULL)
    {
        return;
    }
    Node* node = begin;
    Node* node_last = node->next;
    while (node_last != NULL)
    {
        delete node;
        node = node_last;
        node_last = node->next;
    }
    delete node;
}

template<typename T>
void list<T>::addValue(T value)
{
    Node* node = new Node;
    node->value = value;
    node->next = NULL;

    if (begin == NULL)
    {
        begin = node;
        end = node;
    }
    else
    {
        end->next = node;
        end = node;
    }
}