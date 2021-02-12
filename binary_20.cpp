int find(Node* root,bool &t)
{
    int ls=0;
    int rs=0;
    if(root==NULL)
    {
        return ls;
    }
    ls=find(root->left,t);
    rs=find(root->right,t);
    if((root->left!=NULL||root->right!=NULL)&&root->data!=ls+rs)
    {
        t=false;
    }
    return ls+rs+root->data;
}


bool isSumTree(Node* root)
{
    bool t=true;
    find(root,t);
    return t;
}  
