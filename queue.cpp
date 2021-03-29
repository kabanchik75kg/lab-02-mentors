// Created by Kirill on 28.03.2021.

#include <iostream>
#include "header.hpp/queue.hpp"

void Construct(Queue &queue) {
    queue.Head = NULL;
    queue.Tail = NULL;
}

void Destruct(Queue &queue) {
    while (queue.Head != nullptr) {
        Pop(queue);
    }
    queue.Tail = nullptr;
}

void Push(Queue &queue, int value) {
    if (queue.Tail == nullptr) {
        queue.Head = new Queue::Node();
        queue.Head->Data = value;
        queue.Tail = queue.Head;
    } else {
        Queue::Node *current = queue.Tail;
        queue.Tail = new Queue::Node();
        queue.Tail->Data = value;
        current->Next = queue.Tail;
    }
}

int Pop(Queue &queue) {
    if (queue.Head != nullptr) {
        Queue::Node *temp = queue.Head;
        int Data = queue.Head->Data;
        queue.Head = queue.Head->Next;
        delete temp;
        return Data;
    }
    return -1;
}

bool Empty(const Queue &queue) { return queue.Head == nullptr; }
