#include <iostream>
using namespace std;

struct stack{
    int size;
    int top; //index of top element in the stack
    int* s; //pointer to array for stack, allocated in heap
};

void push(stack *stk, int x){
    if(stk->top==stk->size-1)
        cout << "stack overflow";
    else{
        stk->top++;
        stk->s[stk->top]=x;
    }
}
int pop(stack *stk){
    int x=-1;
    if(stk->top==-1){
        cout << "stack underflow";
    }
    else{
        x=stk->s[stk->top];
        stk->top--;
    }
    return x;
}

int main() {
    int A[10] {7,7,7,7};
    struct stack s1;
    s1.size=10;
    s1.top=-1;
    s1.s=A;
    push(&s1,1);
    push(&s1,12);
    push(&s1,123);
    push(&s1,1234);
    cout << pop(&s1) << endl;
    cout << pop(&s1) << endl;
    cout << pop(&s1) << endl;
    cout << pop(&s1) << endl;
    cout << pop(&s1) << endl;
    return 0;

}