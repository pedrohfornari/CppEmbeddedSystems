/*
   File Node.h

   Class Node

   Class Node stores integer values for a linked list.

   This file has the Node's interface (header file).

   Eduardo Augusto Bezerra <eduardo.bezerra@ufsc.br>
   Departamento de Engenharia Eletrica

   Data da criacao: Abril de 2006.
   Data da ultima alteracao: 8 de outubro de 2015.

*/


#ifndef NODE_H
#define NODE_H

#include "headers.h"

class Node {
    Aluno val;
    Node* next;

  public:

    Node(Aluno dat, Node* nxt);
    Aluno getVal();
    Node* getNext();
    void setVal(Aluno dat);
    void setNext(Node* nxt);
};

#endif // NODE_H
