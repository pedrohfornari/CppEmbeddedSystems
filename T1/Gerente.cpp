/* File Turma.cpp
  Pedro Fornari e Lucas Pereira Luiz
  Março de 2017
*/
#include <string>
#include "Aluno.h"
#include "Gerente.h"
using namespace std;

  Gerente(void)
  {

  }
  Gerente(void);

  void Gerente::cadastra()
  {
    int i = 0;
    while((alunos[i].get_matricula() != 0)&&(i<20))
    {
      i++;
    }
    if(i>=20)
    {
      cout << "turma lotada" << endl;
    }
    else
    {
      cin.get
    }
  }
  void Gerente::deleta(unsigned int matricula);
  void Gerente::consulta_um(unsigned int matricula);
  void Gerente::consulta_todos(void);
  void Gerente::altera_aluno(void);
};
