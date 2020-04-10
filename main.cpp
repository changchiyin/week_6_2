#include "header.h"

int main() {
    printf("stack ���A  : int\n"
        "stack �j�p  : 10\n");
    stmalloc<int, 10> stack;
    stack.now = 0;
    if (isEmpty(stack))     printf("�Ū��I\n");
    else                    printf("���O�Ū��I\n");
    if (isFull(stack, 10))  printf("���F�I\n");
    else                    printf("���O�����I\n");
    for (int i = 0; i < 15; i++)
        push(stack, 10);
    if (isEmpty(stack))     printf("�Ū��I\n");
    else                    printf("���O�Ū��I\n");
    if (isFull(stack, 10))   printf("���F�I\n");
    else                    printf("���O�����I\n");
    printStack(stack);
    for (int i = 0; i < 15; i++)
        pop(stack);
    if (isEmpty(stack))     printf("�Ū��I\n");
    else                    printf("���O�Ū��I\n");
    if (isFull(stack, 10))   printf("���F�I\n");
    else                    printf("���O�����I\n");
    printStack(stack);
    printf("stack ���A  : float\n"
        "stack �j�p  : 5\n");
    stmalloc<float, 5> stack1;
    stack1.now = 0;
    if (isEmpty(stack1))     printf("�Ū��I\n");
    else                    printf("���O�Ū��I\n");
    if (isFull(stack1, 5))  printf("���F�I\n");
    else                    printf("���O�����I\n");
    for (int i = 0; i < 15; i++)
        push(stack1, 5);
    if (isEmpty(stack1))     printf("�Ū��I\n");
    else                    printf("���O�Ū��I\n");
    if (isFull(stack1, 5))   printf("���F�I\n");
    else                    printf("���O�����I\n");
    printStack(stack1);
    for (int i = 0; i < 15; i++)
        pop(stack1);
    if (isEmpty(stack1))     printf("�Ū��I\n");
    else                    printf("���O�Ū��I\n");
    if (isFull(stack1, 5))   printf("���F�I\n");
    else                    printf("���O�����I\n");
    printStack(stack1);
}