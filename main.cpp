// Created by Kirill on 29.03.2021.

#include <iostream>
#include "header.hpp/list.hpp"
#include "header.hpp/queue.hpp"
#include "header.hpp/stack.hpp"

int main() {
    std::cout << "lab-10" << std::endl;

    // list
    std::cout << "List" << std::endl;
    ForwardList list;
    Construct(list);
    PushFront(list, 5);
    PushFront(list, 10);
    PushFront(list, -2);
    PushFront(list, 0);
    PushFront(list, 4);
    std::cout << "Size list:" << Size(list) << std::endl;

    PopFront(list);
    PopFront(list);
    std::cout << "Size list:" << Size(list) << std::endl;

    InsertAfter(list.Head, 11);
    InsertAfter(list.Head->Next, 12);
    InsertAfter(list.Head->Next->Next, 13);
    std::cout << "Size list:" << Size(list) << std::endl;

    RemoveAfter(list.Head->Next->Next);
    RemoveAfter(list.Head->Next);
    std::cout << "Size list:" << Size(list) << std::endl;

    Reverse(list);
    Destruct(list);

    std::cout << "===================================================" << std::endl;
    // queue
    std::cout << "Queue" << std::endl;
    Queue queue;
    Construct(queue);
    std::cout << "Empty queue?  = " << Empty(queue) << std::endl;
    Push(queue, 1);
    Push(queue, 2);
    Push(queue, -2);
    std::cout << "Empty queue? = " << Empty(queue) << std::endl;
    Pop(queue);
    Pop(queue);
    Pop(queue);
    std::cout << "Empty queue?  = " << Empty(queue) << std::endl;
    std::cout << "===================================================" << std::endl;
    Destruct(queue);

    // stack
    std::cout << "Stack" << std::endl;
    Stack stack;
    Construct(stack);
    std::cout << "Empty stack ?  = " << Empty(stack) << std::endl;

    Push(stack, 123);
    Push(stack, 12);

    std::cout << "Empty stack ?  = " << Empty(stack) << std::endl;

    Pop(stack);
    Pop(stack);

    std::cout << "Empty stack ?  = " << Empty(stack) << std::endl;
    Destruct(stack);

    return 0;
}
