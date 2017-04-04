/*
   File List.cpp

   Class List stores Nodes (class Node) in a linked list.

   This file has the implementation for class List

   Class list is definition for a linked list, having the following operations:

   1. Initialize the list to an empty list.
   2. Free the nodes of a list.
   3. Determine whether a list is empty.
   4. Add a node with a given value into the list following
      the first node with another given value.
   5. Add a node with a given value to the front of the list.
   6. Add a node with a given value to the end of the list.
   7. Delete the first node from the list.

   Eduardo Augusto Bezerra <eduardo.bezerra@ufsc.br>
   Departamento de Engenharia Eletrica

   Data da criacao: Abril de 2006.
   Data da ultima alteracao: 8 de outubro de 2015.

*/

#include "Pilha.h"

Pilha::Pilha() {
   top = 0;
}

Pilha::~Pilha() {
  Node* cursor = top;
  while(head) {
    cursor = cursor->getNext();
    delete top;
    top = cursor;
  }
  top = 0; // Officially empty
}

void Pilha::push(Aluno dat) {
  top = new Node(dat, top);
}

Aluno Pilha::pop() {
  Aluno retval;
  if(top!=0){
    retval = top->getVal();
    Node* oldTop = top;
    top = top->getNext();
    delete oldTop;
  }
  return retval;
}
