/* File Gerente.h
  Pedro Fornari e Lucas Pereira Luiz
  Março de 2017
*/

#include <string>
#include "Aluno.h"
using namespace std;

class Gerente
{
  Aluno turma[20];
  unsigned char numero_alunos;
public:
  Gerente();
  ~Gerente(void);
  void cadastra();
  void deleta(unsigned int matricula);
  void consulta_aluno(unsigned int matricula);
  void consulta_turma(void);
  void altera_aluno(unsigned int matricula);
};
