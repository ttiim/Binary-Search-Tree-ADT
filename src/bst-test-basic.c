//----- SAMPLE TEST DRIVER CODE -----
#include <assert.h>
#include "binarytree.h"
/*
int main( )
{
KeyType k;
BinarySearchTree_t tree = btCreate();
assert(btIsEmpty(tree));
assert(btHeight(tree) == 0);
bstInsert(&tree, 10);
bstInsert(&tree, 13);
bstInsert(&tree, 7);
printf("\nTree:\n");
btPrint(tree);
assert(!btIsEmpty(tree));
assert(btSize(tree) == 3);
assert(btHeight(tree) == 2);
bstInsert(&tree, 9);
bstInsert(&tree, 5);
bstInsert(&tree, 3);
bstInsert(&tree, 11);
bstInsert(&tree, 14);
bstInsert(&tree, 12);
bstInsert(&tree, 8);
bstInsert(&tree, 4);
bstInsert(&tree, 2);
printf("\nTree:\n");
btPrint(tree);
assert(btSize(tree) == 12);
assert(btHeight(tree) == 5);
btDestroy(&tree);
}

*/


int main()
{
  BinaryTree_t tree = btCreate();  
 
  Btnode_t* node1 = btNodeCreate(1);    //create more 3 more trees
  Btnode_t* node2 = btNodeCreate(2);
  Btnode_t* node3 = btNodeCreate(3);
  
  tree= node1;
  tree->left = node2;
  tree->right =node3;
 
  btNodePrint(*node3);
  printf("the size is [%d]\n",btSize(tree));
  printf(" the height is [%d]\n", btHeight(tree));
  
    //btprint(tree);    
    
    btDelete(&tree);
    
   // btprint(tree);     
        
}
