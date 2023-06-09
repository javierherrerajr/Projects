#ifndef __TREE_H
#define __TREE_H

#include "Node.h"

class Tree {
private:
  Node *root;

public:
  Tree( );
  ~Tree( );
  void insert(const string &);
  void preOrder( ) const;
  void inOrder( ) const;
  void postOrder( ) const;
  void remove(const string &);
  bool search (const string &) const;

private:
  // Add additional functions/variables here

  // recursive delete function to deallocate tree
  Node* recurDelete(Node*); 
  // recursive helper for preOrder function
  void preOrderHelper(Node*) const;
  // recursive helper for inOrder function
  void inOrderHelper(Node*) const;
  // recursive helper for postOrder function
  void postOrderHelper(Node*) const;
  // shifts nodes up to follow AVL Tree and 2-3 Tree properties
  void shiftUp(Node*);
};

#endif