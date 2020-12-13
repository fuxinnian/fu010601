#ifndef tree_h
#define tree_h
#include <stdio.h>
#include <malloc.h>
#define MaxSize 100

typedef char dataType;

typedef struct treenode {
        dataType data;
        struct treenode *left, *right;
}TreeNode,*t;

void CreateTree(TreeNode *t,dataType x);
void PrintTree(TreeNode *t);
void PreOrder(TreeNode *t);
void InOrder(TreeNode *t);
void PostOrder(TreeNode *t);
void LevelOrder(TreeNode *t);

#endif
