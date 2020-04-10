#include "header.h"

int main() {
    printf("stack 型態  : int\n"
        "stack 大小  : 10\n");
    stmalloc<int, 10> stack;
    stack.now = 0;
    if (isEmpty(stack))     printf("空的！\n");
    else                    printf("不是空的！\n");
    if (isFull(stack, 10))  printf("滿了！\n");
    else                    printf("不是滿的！\n");
    for (int i = 0; i < 15; i++)
        push(stack, 10);
    if (isEmpty(stack))     printf("空的！\n");
    else                    printf("不是空的！\n");
    if (isFull(stack, 10))   printf("滿了！\n");
    else                    printf("不是滿的！\n");
    printStack(stack);
    for (int i = 0; i < 15; i++)
        pop(stack);
    if (isEmpty(stack))     printf("空的！\n");
    else                    printf("不是空的！\n");
    if (isFull(stack, 10))   printf("滿了！\n");
    else                    printf("不是滿的！\n");
    printStack(stack);
    printf("stack 型態  : float\n"
        "stack 大小  : 5\n");
    stmalloc<float, 5> stack1;
    stack1.now = 0;
    if (isEmpty(stack1))     printf("空的！\n");
    else                    printf("不是空的！\n");
    if (isFull(stack1, 5))  printf("滿了！\n");
    else                    printf("不是滿的！\n");
    for (int i = 0; i < 15; i++)
        push(stack1, 5);
    if (isEmpty(stack1))     printf("空的！\n");
    else                    printf("不是空的！\n");
    if (isFull(stack1, 5))   printf("滿了！\n");
    else                    printf("不是滿的！\n");
    printStack(stack1);
    for (int i = 0; i < 15; i++)
        pop(stack1);
    if (isEmpty(stack1))     printf("空的！\n");
    else                    printf("不是空的！\n");
    if (isFull(stack1, 5))   printf("滿了！\n");
    else                    printf("不是滿的！\n");
    printStack(stack1);
}