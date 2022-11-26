// stack using array just changes top variable 
// not delete the variable from memory
#include<iostream>




// insert/delete at the same end, in this case - begining
struct node {
    
    int data;
    node* point next;
    
    
    };
 
node head;

void push(int x){
    
    node* temp = new node();
    temp->data =x;
    temp->next= nullptr; 
    head = temp;
    
    }


void pop(){
    
    node* temp = head;
    if(head == nullptr)return;
    head = head->next;
    free(temp); 
    
    }


int main(){
    
    
    
    }
