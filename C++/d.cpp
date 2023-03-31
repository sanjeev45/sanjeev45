#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }    


};

node *buildTree(node *root)
{
    cout<<"Enter the Data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if (data==-1)
    {
        return NULL;
    }


cout<<"Enter the data for inserting in left"<<endl;
root->left = buildTree(root->left);
cout<<"enter the data for inserting in right"<<endl;
root->right = buildTree(root->right);
return root;
}
void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node *temp=q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    
        }

}

int main()
{
    node* root=NULL;
    root=buildTree(root);
    // 1, 3 7 -1 -1 11

    levelOrderTraversal(root);

    return 0;

}