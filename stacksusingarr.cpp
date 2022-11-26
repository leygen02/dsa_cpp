#include<iostream>
// ABSTRACT DATA TYPE

// operations - pop,push, top and isEmpty and all are 0(1)

int A[101];
int top = -1;


a


void Push(int x){
    
    if(top == 100){
        std::cout<<"stack overflow \n";
        return;
        
        }
    A[++top] = x;
    
    
    }


void Pop(int x){
    
    if (top == -1){
        
        std::cout<<"underflow \n";
        return;
        
        }
    
    top--;
     
    
    
    }


void isEmpty(int arr){
    
    
    if(top ==-1){
        
        return;}
        
    }
    
    
int main(){
    
    Push(1);
    Push(2); 
    Push(3);
    
    
    for(int i=0;i<=top;i++){
    std::cout<<A[i];
}
    }
