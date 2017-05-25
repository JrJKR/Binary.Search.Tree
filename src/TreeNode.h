/** @file TreeNode.h */

#include "KeyedItem.h"

typedef KeyedItem TreeItemType;

/** @class TreeNode
 * Node used in the ADT binary search tree. */
class TreeNode
{
public:
   TreeNode() {}
   TreeNode(const TreeItemType& nodeItem,
            TreeNode *left = NULL, TreeNode *right = NULL)
      : item(nodeItem), leftChildPtr(left),
      rightChildPtr(right) {}

   /** A data item in the tree. */
   TreeItemType item;
   /** Pointers to children. */
   TreeNode *leftChildPtr, *rightChildPtr;
}; // end TreeNode
