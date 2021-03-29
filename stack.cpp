// Created by Kirill on 28.03.2021.

#include "header.hpp/stack.hpp"

void Construct(Stack &stack) {
    stack.Top = nullptr;
}

void Push(Stack &stack, int value) {
    Stack::Node *temp = stack.Top;
    stack.Top = new Stack::Node();
    stack.Top->Data = value;
    stack.Top->Next = temp;
}

int Pop(Stack &stack) {
    if (stack.Top != nullptr) {
        Stack::Node *temp = stack.Top;
        int Data = stack.Top->Data;
        stack.Top = stack.Top->Next;
        delete temp;
        return Data;
    }
    return 0;
}

bool Empty(const Stack &stack) {
    return stack.Top == nullptr;
}


void Destruct(Stack &stack) {
    while (stack.Top != nullptr) {
        Pop(stack);
    }
}
