// has three cases - noodes with 0 child, 1 child, 2 child
// case-3  is reducible to case 1 and 2 , hence a recursion pattern forms 
// steps - find minimum val in right, copy the value in target node and delete the duplicate in right subtree
// or find max value in left tree, copy the value in target node and dlete from left subtree  

struct node{
    
    int data;
    node* left;
    node* right;
    
    
    };

node* root;


void DeleteNode(node* root, int data){
    
    
    if(root ==nullptr) return root;
    else if (data<root->data) root->left = DeleteNode(root->left,data)     
    else if (data>root->data) root ->right = DeletNode(root->righ,data)
    else {   // found the target node
        
        if(root->left == nullptr && root->right == nullptr){ // one child
            
            free(root);
            root= nullptr;
            
            
            }
        else if (root->left==nullptr || root->right == nullptr){  // two child
            node* temp = root;
            root = root->right;
            free(temp);
            }
        else  { // 2 child 
            
            node* temp = findMin(root->right)
            root->data=temp->data;
            root->right = DeleteNode(root->right, temp->data); // recursion to reduce to case 1 and case 2 
            
            
            }
        

        }
    
    
    
    return root;
    }


int main (){}
