#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* top = NULL; //decl as global variable
// if not decl one in main function

void push(struct node* ptr, int x){
    struct node* temp;
    temp=new node;
    if(temp==NULL) cout << "Stack overflow";
    else{
        temp->data=x;
        temp->next=top;
        top=temp;
    }
}
int pop(struct node* ptr){
    int x=-1;
    if(ptr==NULL) cout << "Stack underflow";
    else{
        x=top->data;
        top=top->next;
    }
    return x;
}
void display(struct node* ptr){
    while (ptr!=NULL)
    {
        cout << ptr->data << " ";
        ptr=ptr->next;
    }
    
}

int main() {

    push(top,13);
    push(top,26);
    push(top,33);
    push(top,49);
    // cout << pop(top);
    // cout << pop(top);
    // cout << pop(top);
    display(top);
    cout << endl;
    cout << pop(top);
    cout << pop(top);
    cout << endl;
    display(top);
    return 0;

}