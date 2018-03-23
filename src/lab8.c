/*Capilano University
*   Comp 220- Professor Jospeph Fall
*   Authour: Tim Wriglesworth
*   Worked in collaboration with  Karan Nedungadi
*   Date:22.03.18
    Lab 8  
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



/*******************
 * PRIVATE TYPE DECLARATION
 ********************/

typedef int keytype_t; 

struct BTNode{
    keytype_t key;
    struct BTNode *left;
    struct BTNode *right;
};

typedef struct BTNode Btnode_t;

typedef Btnode_t* BinaryTree_t;


//----prototypes

bool btIsEmpty(BinaryTree_t tree);
int btHeight(BinaryTree_t tree);
int btSize(BinaryTree_t tree);
BinaryTree_t btPrint(BinaryTree_t tree);

// -------HELP OPERATIONS----------
/*
int MaxValue(int a, int b)  /
{
    int max = a;
    if (max <b)
    b=max;
    
    return max;
    
}

*/


//--------TREE OPERATIONS------------


Btnode_t* btNodeCreate (keytype_t key)
{
    Btnode_t* node= malloc(sizeof(Btnode_t));
    node->key = key;
    node->left= NULL;
    node->right=NULL;
    
    return node;
    
}


BinaryTree_t btCreate()                       //constructor 
{
    BinaryTree_t tree = NULL;
    return tree;
}

BinaryTree_t btDelete(BinaryTree_t* tree_ref)      // Destroy(Node** sub-tree-ref): free() all Nodes in a sub-tree.  
                                               // Add some additional test cases to your main() program to test each of these function as you write them.
{
    BinaryTree_t tree = *tree_ref;
    
    if (tree != NULL)
    {
        btDelete(&tree->left);
        btDelete(&tree->right);
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
    printf("(%d) \n",node.key);
    
}
    
    
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
   
   
 /* 
 BinaryTree_t btPrint(BinaryTree_t tree)   //not working quite yet
 {
     
    if(btIsEmpty(tree))
      return 0;
    
    btPrint(tree->left);      //use levels idea pass in a level and iterate through
    btNodePrint( tree->key);
    btPrint(tree->right);

}                 
   
*/
bool btIsEmpty(BinaryTree_t tree)
{
     return(tree==NULL);
}
   
    
/* 
    
void preOrder(BinaryTree_t tree)
{
    if (tree != NULL)
    {
    
        printf("%d\t", tree–>data); 
        preOrder(tree–>left);
        preOrder(tree–>right);

    }    
    
}


void inOrder (BinaryTree_t tree)
{
    if (tree != NULL)
    {
    
    inOrderl(tree->left);
    printf("%d\t", tree->data); 
    inOrder(tree->right);
    }
    
}



void postOrder(BinaryTree_t tree)
{
  if (tree != NULL)
  {
  postOrder(tree->left);
  postOrder(tree->right); 
  printf("%d\t", tree->data);
  }
}
   
    //btNodePrint( const Btnode_t node)
    



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
