#include<iostream>
#define N 10
int A[10];
int front,rear;



bool isFull(){
    
    if(rear ==(sizeof(A)/sizeof(int))) return true;
    else return false;
    }

bool isEmpty(){
    
    if (front && rear == -1) return true;
    else return false;
    
    
    }
    
    
    
void Enqueue(int x){
    
    if(isFull()) return; // if cicular queue replace by if(rear+1)%N ==front return
    else if (isEmpty()) {
        front = 0;
        rear = 0;
        
        }
    else{
        
        rear = rear + 1; // replace by  (rear = rear+1)%N 
    
        }
    A[rear] = x;
    
    }

void Dequeue(){
    
    if(isEmpty){return;}
    else if(front==rear){
        // what ??
        front = rear -1;
        }
    else{
        
        front++; // replace by front+1 % N
        
        
        }

    }

void display_queue(){
    
    for(int i =front;i<=rear<;i++)
    
    
    }
int main(){
    
    
    
    
    } 
