/* File Turma.h
  Pedro Fornari e Lucas Pereira Luiz
  Março de 2017
*/
#include <string>
#include "Aluno.h"
using namespace std;

class Turma
{
  Aluno turma[20];
  unsigned char numero_alunos;
public:
  Turma(void);
  ~Turma(void);
  void cadastra();
  void deleta(unsigned int matricula);
  void consulta_um(unsigned int matricula);
  void consulta_todos(void);
};
