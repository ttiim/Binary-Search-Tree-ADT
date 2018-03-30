/*Capilano University
*   Comp 220- Professor Jospeph Fall
*   Authour: Tim Wriglesworth
*   Worked in collaboration with  Karan Nedungadi and Andre Wakkary
*   Date:29.03.18
    Lab 8 and 9 combined  
*  
  */
 //https://stackoverflow.com/questions/3437404/min-and-max-in-c?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa
#define MAX(a,b) (((a)>(b))?(a):(b))


#include <stdio.h>
#include <stdlib.h>         
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>
#include "binarytree.h"




//Help Operation prototypes

Btnode_t* bstFind (BinaryTree_t tree, keytype_t val);
entry_t entryCreate();

// -------HELP OPERATIONS----------

/*
*   Ultimately, this will be an internal helper function since the Tree API will want to
*   return a data item here, not a tree Node.
*   
*    add a function to search a Tree based on the key, and
*   return a pointer to the matching entry, if found. Return NULL if not
*   found 
*
*/


Btnode_t* bstFind (BinaryTree_t tree, keytype_t val)
{
    if( btIsEmpty(tree))
    return NULL;
    
    else if (tree->entry.key == val)   
    {
        return tree;
        
    }
    
    else if (val < tree->entry.key)
    {
        return (bstFind(tree->left, val));
    }
    
    else if (val > tree->entry.key)
    {
        return (bstFind( tree->right, val));
        
    }
    
}


/*
struct node *findSmallestElement(struct node *tree) 
{ if( (tree == NULL) || (tree->left == NULL)) 
return tree; 
else 
return findSmallestElement(tree ->left); }
*/


//--------TREE OPERATIONS------------



Btnode_t* btNodeCreate (entry_t entry)
{
    //entry = entryCreate();
    Btnode_t* node= malloc(sizeof(Btnode_t));
    node->entry = entry;
    node->left= NULL;
    node->right=NULL;
    //malloc the entry then destroy in destroy
    return node;
    
}



BinaryTree_t bstCreate()                        
{
    BinaryTree_t tree = NULL;
    return tree;
}

BinaryTree_t bstDelete(BinaryTree_t* tree_ref)      // Destroy(Node** sub-tree-ref): free() all Nodes in a sub-tree.  
                                               // Add some additional test cases to your main() program to test each of these function as you write them.
{
    BinaryTree_t tree = *tree_ref;
    
    if (tree != NULL)
    {
        bstDelete(&tree->left);
        bstDelete(&tree->right);
        free(tree);
        }
        *tree_ref = NULL;
}

 /*
 
  a function to print a text representation of a single Node to the console.
Find some visual representation for the links for now – we'll come back to this
later.
*/

 BinaryTree_t btNodePrint( const Btnode_t node)
{
    
    printf("The Binary Tree is: \n (%d) \n",node.entry.key);
}



/*
* print the number of nodes
*/

    
 int btSize(BinaryTree_t tree)      // return the total number of nodes in a sub-tree. 
 {
   if(btIsEmpty(tree))
   return 0;
   
   int leftheight= btSize(tree->left);
   int rightheight = btSize(tree->right);
   return (1 + leftheight + rightheight);
   
 }
    
int btHeight(BinaryTree_t tree)  // return the height of a sub-tree.
{
      if (btIsEmpty(tree))
      return 0;
      
      int leftheight = btHeight(tree->left);
      int rightheight =btHeight(tree->right);
      return (1+MAX(leftheight, rightheight));
}
   
   
BinaryTree_t bstInsert (BinaryTree_t* tree_ref, entry_t entry)
{
    BinaryTree_t tree = *tree_ref;
    if (btIsEmpty(tree))
    {
    *tree_ref = btNodeCreate(entry); //node create
    }
    
    else if (entry.key > tree->entry.key)
    {
    bstInsert(&tree->right, entry);
    }
    
    else if (entry.key < tree->entry.key)
    bstInsert( &tree ->left, entry);
}
  
  
/* Search(KeyType K) : add a function to search a Tree based on the key, and
*  return a pointer to the matching entry, if found. Return NULL if not found
*/  

entry_t* search (BinaryTree_t tree, keytype_t k)
{
    Btnode_t* ptr = bstFind(tree,k);
    return & ptr->entry;
}



bool btIsEmpty(BinaryTree_t tree)
{
     return(tree==NULL);
}
   
    

void inOrder (BinaryTree_t tree)
{
    if (tree != NULL)
    {
    
    inOrder(tree->left);
   printf("tree->key %d\n", tree->entry.key);
   // btNodePrint(*tree);
    inOrder(tree->right);
    }
    
}


/*
*  print the nodes out
*/
/*
BinaryTree_t btPrint (const Btnode_t node)
{
    
    
    
    
}
*/    



/*
 BinaryTree_t btPrint(BinaryTree_t tree)   //not working quite yet     Joseph meant that this is quite tricky
 {
     
    if(btIsEmpty(tree))
      return 0;
    
    btPrint(tree->left);                    //use levels idea pass in a level and iterate through
    btNodePrint( *tree);
    btPrint(tree->right);

}                 



    
void preOrder(BinaryTree_t tree)
{
    if (tree != NULL)
    {
    
        printf("%d\t", tree–>data); 
        preOrder(tree–>left);
        preOrder(tree–>right);

    }    
    
}

*/

    
    
    

