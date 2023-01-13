#ifndef STRUCTS__NODE_H
#define STRUCTS__NODE_H
struct Node {
    int currentNumber;
    struct Node *leftNode;
    struct Node *rightNode;
};
#endif //STRUCTS__NODE_H