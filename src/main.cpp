#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <memory>

int main() {
    int* myPointer = nullptr;

     myPointer = new int(3);
    
    delete(myPointer);
    myPointer = nullptr;

    int* myPointer2 = nullptr;

    myPointer2 = (int*)malloc(sizeof(myPointer2));
    *myPointer2 = 3;
    free(myPointer2);
    myPointer2 = nullptr;

    return 0;
}