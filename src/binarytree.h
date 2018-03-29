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



/*
*
*/
Btnode_t* btNodeCreate (keytype_t key);


/*
*
*/
BinaryTree_t btCreate() ;



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
BinaryTree_t btInsert (BinaryTree_t* tree_ref, keytype_t key);

 
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
bool btIsEmpty(BinaryTree_t tree)


 
/*
*
*/
void preOrder(BinaryTree_t tree);


 
/*
*
*/
void inOrder (BinaryTree_t tree);




 
/*
*
*/
void postOrder(BinaryTree_t tree);




 
/*
*
*/





 
/*
*
*/





 
/*
*
*/



 
 
 