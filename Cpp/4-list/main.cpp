/*
   File main.cpp

   Test program for Node and List classes.

   Eduardo Augusto Bezerra <eduardo.bezerra@ufsc.br>
   Departamento de Engenharia Eletrica

   Data da criacao: Abril de 2006.
   Data da ultima alteracao: 8 de outubro de 2015.

*/

#include "List.cpp"

int main(){

  Pilha p1, p2;
  Aluno a1, a2;

  p1.push(a1);
  p1.push(a2);

  p2 = p1;

  a1 = p1.pop();

  cout << "Topo da pilha continha: "
       << a1.getNome() << endl;
  
  return 0;

}
