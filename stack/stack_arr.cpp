#include <iostream>
using namespace std;

struct stack{
    int size;
    int top; //index of top element in the stack
    int* s; //pointer to array for stack, allocated in heap
};
// void create(struct stack* stk){

// }
// void display(struct stack* stk){

// }

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
        cout << "stack underflow ";
    }
    else{
        x=stk->s[stk->top];
        stk->top--;
    }
    return x;
}
int peek(stack stk, int i){
    int x=-1;
    if(stk.top-i+1<0 || i==0){
        cout << "Invalid index" << endl;
        return x;
    }
    x=stk.s[stk.top-i+1];
    return x;
}
int stacktop(stack stk){
    if(stk.top==-1) return -1;
    else return stk.s[stk.top];
}
bool isempty(stack stk){
    if (stk.top==-1) return true;
    else return false;
}
bool isfull(stack stk){
    if (stk.top==stk.size-1) return true;
    else return false;
}

//infix to postfix +-*/ LR associativity

//infix to postfix +-*/^ LR+RL associativity

//evaluating the value of postfix

int main() {
    int A[4] {};
    struct stack s1;
    s1.size=4;
    s1.top=-1;
    s1.s=A;
    cout << boolalpha;
    // isempty(s1);
    push(&s1,1);
    // cout << isempty(s1) << endl;
    push(&s1,12);
    push(&s1,123);
    push(&s1,1234);
    cout << peek(s1, 0) << endl;
    cout << peek(s1, 1) << endl;
    cout << peek(s1, 2) << endl;
    cout << peek(s1, 3) << endl;
    cout << peek(s1, 4) << endl;
    // cout << isfull(s1) << endl;
    // push(&s1,1234);
    // cout << isfull(s1) << endl;
    // cout << stacktop(s1) << endl;
    // cout << pop(&s1) << endl;
    // cout << pop(&s1) << endl;
    // cout << pop(&s1) << endl;
    // cout << isempty(s1) << endl;
    // cout << pop(&s1) << endl;
    // cout << isempty(s1) << endl;
    // cout << pop(&s1) << endl;
    // cout << isempty(s1);
    return 0;

}