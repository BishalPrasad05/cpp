#include <iostream>

using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};




node* binaryTree(node* root)
{
    cout << "Enter the data:";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;

    cout << "Enter the left of " << data << " " << endl;
    binaryTree(root->left);
    cout << "Enter the right of " << data << " " << endl;
    binaryTree(root->right);
    return root;
}

int main(){
    
    return 0;
}