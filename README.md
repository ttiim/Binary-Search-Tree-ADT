# Binary-Search-Tree-ADT
this is being built through lab 8 and 9 exercises

Exercise 1: Define a C struct to represent one Node in a linked implementation of a
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
