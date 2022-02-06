#include <iostream>
using namespace std;

struct stack {
    int size;
    int top;
    char* s;
};
struct stack s1;

void push(stack *stk, char x){
    if(stk->top==stk->size-1)
        cout << "stack overflow";
    else{
        stk->top++;
        stk->s[stk->top]=x;
    }
}
char pop(stack *stk){
    char x=' ';
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

bool par_match(struct stack stk, char* exp){
    for(int i=0; exp[i]!='\0'; i++){
        if (exp[i]=='('){
            push(&stk, exp[i]);
        }
        else if(exp[i]==')'){
            if(stk.top==-1) return false;
            pop(&stk);
        }
    }
    return stk.top==-1?true:false;
}

int main() {

    char* exp="((a+b)*(c+d))";
    //initialising stack s1
    s1.size=50;
    s1.s=new char[s1.size];
    s1.top=-1;
    //initialising stack s1
    cout << boolalpha;
    cout << par_match(s1, exp);
    return 0;

}