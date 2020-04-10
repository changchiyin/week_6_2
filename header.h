#include <stdio.h>
#include <iostream>
using namespace std;

template <class T, int num>
struct stmalloc {
    T data[num];
    int now;
};

template <class T, int num>
bool push(stmalloc<T, num>& stack, int size) {
    T save;
    printf("請輸入一個值：");
    cin >> save;
    if (isFull(stack, size)) {
        printf("失敗，滿了！\n");
        return false;
    }
    else {
        stack.data[stack.now] = save;
        stack.now++;
        return true;
    }
}

template <class T, int num>
bool pop(stmalloc<T, num>& stack) {
    if (isEmpty(stack)) {
        printf("失敗，空了！\n");
        return false;
    }
    else {
        printf("pop is ");
        cout << stack.data[--stack.now] << endl;
        return true;
    }
}

template <class T, int num>
bool isEmpty(stmalloc<T, num> stack) {
    if (stack.now == 0)
        return true;
    else
        return false;
}

template <class T, int num>
bool isFull(stmalloc<T, num> stack, int size) {
    if (stack.now == size)
        return true;
    else
        return false;
}

template <class T, int num>
void printStack(stmalloc<T, num> stack) {
    for (int i = stack.now - 1; i >= 0; i--)
        cout << stack.data[i] << " <-- ";
    cout << "Null\n";
}