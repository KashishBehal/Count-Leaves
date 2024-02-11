int countLeaves(Node* root)
{
  // Your code here
  int count=0;
  if(root==NULL){
      return 0;
  }
  if(root->left==NULL &&root->right==NULL){
      return 1;
  }
  int l=countLeaves(root->left);
  int r=countLeaves(root->right);
  return l+r;
}
