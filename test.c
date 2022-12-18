#include <stdio.h>
#include <stdlib.h>
 
#define MAX_STACK_SIZE 6
 
 
typedef int element;
typedef struct{
    int top;
    element data[MAX_STACK_SIZE];
} StackType;
 
 
void init_stack(StackType *s){
    s -> top = -1;
}
 
int is_empty(StackType *s){
    return (s -> top == -1);
}
 
int is_full(StackType *s){
    return (s -> top == (MAX_STACK_SIZE-1));
}
 
void push(StackType *s, element item){
    if(is_full(s)){
        fprintf(stderr, "스택 포화 에러\n");
        exit(1);
    }
    else
        s -> data [++(s -> top)] = item;
}
 
element pop(StackType *s){
    if(is_empty(s)){
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else
        return s -> data[(s->top)--];
}
 
element peek(StackType *s){
    if(is_empty(s)){
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else
        return s -> data[s->top];
}
 
// 여기부터 문제를 위한 코드
 
int main(void){
    int i;
    int temp;
    StackType s;
    printf("정수 배열의 크기: %d\n", MAX_STACK_SIZE);
    init_stack(&s);
    printf("정수를 입력하시오: ");
    for(i=0; i<MAX_STACK_SIZE; i++){
        scanf("%d", &temp);
        push(&s, temp);
    }
    printf("반전된 정수 배열: ");
    for(i=0; i<MAX_STACK_SIZE; i++){
        printf("%d ", pop(&s));
    }
    return 0;
}