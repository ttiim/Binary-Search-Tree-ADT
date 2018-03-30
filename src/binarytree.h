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

struct entry_s{
keytype_t key;
char* data;
};

typedef struct entry_s entry_t;



struct BTNode{
    entry_t entry;
    struct BTNode *left;
    struct BTNode *right;
};

typedef struct BTNode Btnode_t;

typedef Btnode_t* BinaryTree_t;



/*
*
*/
Btnode_t* btNodeCreate (entry_t entry);


/*
*
*/
BinaryTree_t bstCreate() ;

/*
*
*/
entry_t* search (BinaryTree_t tree, keytype_t k);

/*
*
*/
BinaryTree_t btDelete(BinaryTree_t* tree_ref);


/*
*
*/
 BinaryTree_t btNodePrint( const Btnode_t node);

/*
*
*/
BinaryTree_t bstInsert (BinaryTree_t* tree_ref, entry_t entry);

 
/*
*
*/

 int btSize(BinaryTree_t tree);
 
 
 /*
*
*/ 
 int btHeight(BinaryTree_t tree);
 
/*
*
*/
bool btIsEmpty(BinaryTree_t tree);


 
/*
*
*/
//void preOrder(BinaryTree_t tree);


 
/*
*
*/
void inOrder (BinaryTree_t tree);




 
/*
*
*/
//void postOrder(BinaryTree_t tree);




 
/*
*
*/
BinaryTree_t btPrint (const Btnode_t node);




 
/*
*
*/





 
/*
*
*/



 
 
 