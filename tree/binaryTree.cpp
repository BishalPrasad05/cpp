#include <iostream>

using namespace std;

class node
{
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

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

node *binaryTree(node *root)
{
    cout << "Enter the data:";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;

    cout << "Enter the left of " << data << " " << endl;
    root->left = binaryTree(root->left);
    cout << "Enter the right of " << data << " " << endl;
    root->right = binaryTree(root->right);
    return root;
}

void print(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
#include<queue>
void levelOrderTraversal(node* root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if(temp==NULL)
        {
            
        }
    }
}

int main()
{
    node *root;
    node *root1 = binaryTree(root);
    cout << endl
         << "The data of the BT :";

    print(root1);
    cout << endl;

    return 0;
}