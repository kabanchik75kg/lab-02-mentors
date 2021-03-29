// Created by Kirill on 28.03.2021.

#include "header.hpp/list.hpp"

void Construct(ForwardList &list) { list.Head = nullptr; }

void Destruct(ForwardList &list) {
    while (list.Head != nullptr) {
        PopFront(list);
    }
}

void PushFront(ForwardList &list, int value) {
    if (list.Head == nullptr) {
        list.Head = new ForwardList::Node();
        list.Head->Data = value;
    } else {
        ForwardList::Node *temp = list.Head;
        list.Head = new ForwardList::Node();
        list.Head->Data = value;
        list.Head->Next = temp;
    }
}

void PopFront(ForwardList &list) {
    if (list.Head != nullptr) {
        ForwardList::Node *temp = list.Head;
        list.Head = list.Head->Next;
        delete temp;
    }
}

void RemoveAfter(ForwardList::Node *node) {
    if (node != nullptr && node->Next != nullptr) {
        ForwardList::Node *temp = node->Next;
        node->Next = node->Next->Next;
        delete temp;
    }
}

ForwardList::Node *InsertAfter(ForwardList::Node *node, int value) {
    if (node != nullptr) {
        ForwardList::Node *temp = node->Next;
        node->Next = new ForwardList::Node();
        node->Next->Data = value;
        node->Next->Next = temp;
        return node->Next;
    }
    return nullptr;
}

size_t Size(const ForwardList &list) {
    size_t Size = 0;
    if (list.Head != nullptr) {
        ForwardList::Node *current = list.Head;
        while (current != nullptr) {
            current = current->Next;
            Size++;
        }
    }
    return Size;
}

void Reverse(ForwardList &list) {
    if (list.Head != nullptr) {
        ForwardList::Node *temp = list.Head;
        while (temp->Next != nullptr) {
            PushFront(list, temp->Next->Data);
            RemoveAfter(temp);
        }
    }
}
