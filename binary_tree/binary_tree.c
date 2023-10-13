#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

// Creating a new node returing the new node
TreeNode *createNode(int data)
{
    TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
    if (newNode)
    {
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
    }
    return newNode;
}

void preorderTraversal(TreeNode* root) {
  if (root == NULL) return;
  printf("%d ->", root->data);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

