LAB 8


# Binary-Search-Tree-ADT
this is being built through lab 8 and 9 exercises

#Exercise 1: Define a C struct to represent one Node in a linked implementation of a
Binary Tree.
The fields are:
• An int, representing the key item stored in the node.
• 2 pointers, representing the links to the left and right sub-tree nodes.
You are simply defining the structure of the data to represent a single Node in the
tree.


Exercise 2: Write some basic functions for your Node struct:
• a constructor function to dynamically allocate, initialize, and return a pointer to
the new Node. Since the Node itself contains no internal dynamic memory (it
is a shallow structure), they can be destructed with a simple free().
• a function to print a text representation of a single Node to the console.
Find some visual representation for the links for now – we'll come back to this
later.


Exercise 3: Write some experimental code to work with the Node struct.
• Write a simple main() program that creates 3 Nodes, linked together into a
simple 2-level tree.
    o Start with a Node pointer variable, say called root.
o Construct a new Node and point root at it (this is the root node).
o Construct 2 additional Nodes and link them into the left- and right-subtree
pointers of the root.



Exercise 4: Write some basic, recursive sub-tree operations:
• Size(Node* sub-tree) : return the total number of nodes in a sub-tree.
• Height(Node* sub-tree) : return the height of a sub-tree.
• Print(Node* sub-tree): print each node in a sub-tree.
It is difficult to print a general-purpose visual representation of a tree, but give
it a try, and don't worry too much about getting this perfect.
• Destroy(Node** sub-tree-ref): free() all Nodes in a sub-tree.

Use a recursive post-order traversal: destroy sub-trees first, then free the root.
Note: to avoid a dangling pointer, you'll need to pass Node ptrs by reference!
Add some additional test cases to your main() program to test each of these functions
as you write them.

Note that these functions work at the sub-tree level – they implement recursive
algorithms that operate on any sub-tree Node.
We will implement the actual Tree ADT in lab 9, but many tree operations will simply
call on these recursive, Node-level operations, starting at the tree root (i.e., the sub-tree
that is the entire tree). For now, "manually" add some additional nodes to your test tree
in main() so that you have a more complex / interesting tree to test your recursive
algorithms with.

B. Tree traversals


Exercise 5: There are 3 common recursive Tree Traversals, the code for each is very
similar, only the ordering of keys in the output is different. For each
traversal, simply print the key values in traversal order:

• in-order : left sub-tree keys; sub-tree root key; right-sub-tree keys.

• pre-order : ; sub-tree root key; left sub-tree keys, right-sub-tree keys.

• post-order : left sub-tree keys, right-sub-tree keys; sub-tree root key.

Tip: examine the expression tree diagram on page 1 – these traversals will create an infix,
pre-fix, and post-fix expression, respectively, from this tree.
Add some additional test cases to your main() program to test each traversal.



-------------------------------------------------------------------------------------------------------------------------------------------------------------
LAB 9

A

Exercise 1: add some abstractions for a Binary Tree data type:
(Note: these are nearly pure abstraction – hide that a Tree is just a Node pointer)
• Use a simple C typdef to define the BinaryTree data type, which is simply a
pointer to the root Node of a tree.
• Write a constructor to initialize and return an empty BinaryTree value.
• Write function: IsEmpty(BinaryTree t) to return true iff the Tree is empty.

Exercise 2: Re-write each of the basic Tree operations you developed in lab 8 so they
take a BinaryTree argument instead of a Node pointer.
• Size(BinaryTree t) : return the number of nodes in Tree t.
• Height(BinaryTree t) : return the height of Tree t.
• Print(BinaryTree t) : print an in-order text representation of Tree t.
• Destroy(BinaryTree* t_ref) : empty and free all the memory allocated to Tree t.
Be sure to pass a reference to a Tree for this function – it is a "mutator1".
Replace the experimental code in your main() program to use and test each of
your new Tree operations (try using assert to check each test result).



B

Exercise 3: Write an insert function that maintains search ordering.
• Insert(KeyType K) : inserts a new leaf node with key K in Search Tree order.
Notice that insertion involves a traversal! Tree traversals are naturally recursive,
so use recursive thinking to solve this!
Be sure to pass a reference to a Tree to this function – it is a "mutator1"!
Revise your test driver to use this function to insert nodes into your tree and to create
a deeper tree with a more complex shape.
Notice that inserting keys in sequence creates a linear structure – try creating a more
complex tree by inserting keys out of order.





Exercise 4: Write the fundamental Search Tree search algorithm.
• Find(KeyType K) : find a node with key K in a Search Tree, if no such node is
found, return NULL.
Ultimately, this will be an internal helper function since the Tree API will want to
return a data item here, not a tree Node.
Later, this function could serve as the basis for public API functions to determine if the
key exists in the tree and to return other data associated with the key.
For now, add some additional test cases to your main() program to test the Find()
function directly.


C

Exercise 5: Store data records in the Binary Search Tree.
• Entry : define a struct data type with a key (int) and a data value (C-string).
• Tree Node : defines an Entry as the data type stored in each node.
• Node constructor : takes a entry as input, stores a deep copy of the entry in the
Node. Destructor must free the entry's dynamic data.
• Tree API : keys are still integers, so functions that take keys as parameters will
only need to change their internal algorithms to look for the entry.key
field.
• Search(KeyType K) : add a function to search a Tree based on the key, and
return a pointer to the matching entry, if found. Return NULL if not
found
Revise the test cases to your main() program to test the tree operations using Entry
structs instead of plain integers as the data for each tree node.