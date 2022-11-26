// implement a binary search tree
// smaller -> left and if greater -> right
// operations -> search, insert and remove
// terms used -> root, left and right node, balanced, complete BST, AVL tree
// height and depth 
// operation cost -> O(logn)
struct node{
    
    int data;
    node* left;
    node* right;
    
    };
node* root;

node* GetnewNode(int data){
    node* temp = new node();
    temp->data = data;
    temp->left = nullptr;
    temp->right = nullptr;  
    return temp; // what to return not the type
      }

node* Insert(node* root, int data){
    
    // empty tree
    if(root == nullptr){
       
        root = GetnewNode(data);
        return root;
    }
    else if(x<=root->data){
            root->left= Insert(root->left,data);
            
        } 
    else {
        root->right = Insert(root->right,data);
        }
    return root;
    
    
    }   



bool Search(node* root, int x){
    
    if(root == null){return false;}
    else if (root->data==data)return true;
    else if(data<=root->data) return Search(root->left,data);
    else return Search(root->right,data);
    
    }

// iterative approach
int findMin(node* root){
    
    if(root == nullptr){
        
        cout<<"error tree empty";
        return -1;
        }
    while(root->left!=nullptr){
        root = root->left;
        
        }
        return root->data;
    
    
    
    
    }
    
    
    
int findheight(root){
    
    if (root==nullptr) return -1; // 0 if you want to count nodes
    
    
    leftnode = root->left;
    rightnode = root->right;
    
    
    return std::max(leftnode,rightnode)+1;
    
    
    }

int findMinRec(){
    
    if(root==nullptr){return -1;}
    else if (root->left==nullptr){
        
        return root->data;
        }
    return FindMinRec(root->left);
    }

int main(){
    root = nullptr;
    
    }
