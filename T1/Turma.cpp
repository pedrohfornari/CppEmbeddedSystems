/* File Turma.cpp
  Pedro Fornari e Lucas Pereira Luiz
  Março de 2017
*/
#include <string>
#include "Aluno.h"
#include "Turma.h"
using namespace std;

  Turma(void)
  {

  }
  ~Turma(void);
  void cadastra();
  void deleta(unsigned int matricula);
  void consulta_um(unsigned int matricula);
  void consulta_todos(void);
};
