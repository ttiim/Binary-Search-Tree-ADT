//----- SAMPLE TEST DRIVER CODE -----
#include <assert.h>
#include "binarytree.h"

int main()
{

BinaryTree_t tree = bstCreate();
	assert(btIsEmpty(tree));
	assert(btHeight(tree) == 0);
	
	entry_t ten = {10, "ten"};
	bstInsert(&tree, ten);
	entry_t thirteen = {13, "thirteen"};
	bstInsert(&tree, thirteen);
	entry_t seven = {7, "seven"};
   bstInsert(&tree, seven);
   
   printf("\nTree:\n");
   inOrder(tree);
   assert(!btIsEmpty(tree));
   assert(btSize(tree) == 3);
   assert(btHeight(tree) == 2);

   entry_t nine = {9, "nine"};
   bstInsert(&tree, nine);

   entry_t five = {5, "five"};
   bstInsert(&tree, five);

   entry_t three = {3, "three"};
   bstInsert(&tree, three);

   entry_t eleven = {11, "eleven"};
   bstInsert(&tree, eleven);

   entry_t fourteen = {14, "fourteen"};
   bstInsert(&tree, fourteen);

   entry_t twelve = {12, "twelve"};
   bstInsert(&tree, twelve);

   entry_t eight = {8, "eight"};
   bstInsert(&tree, eight);
   
   
   
    entry_t two = {2, "two"};
   bstInsert(&tree, two);

   printf("\nTree:\n");
   inOrder(tree);

   assert(btSize(tree) == 11);
   assert(btHeight(tree) == 5);

  // Btnode_t* node = bstFind(tree, 4);

   //printf("entry:\n key: %d data: %s", node.entry.key, node.entry.data);

   bstDelete(&tree);

   assert(btIsEmpty(tree));

   printf("\n\n----- testing complete -----\n\n");
}



