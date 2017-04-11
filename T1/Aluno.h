/* File Aluno.h
  Pedro Fornari e Lucas Pereira Luiz
  Março de 2017
*/
#include <string>
using namespace std;

class Aluno
{
  unsigned int matricula;
  unsigned float n1;
  unsigned float n2;
  unsigned float nf;
  string nome;
public:
  Aluno(unsigned int matr);
  ~Aluno(void);
  void set_n1();
  void set_n2();
  void set_matricula(unsigned int matr);
  unsigned float get_n1(void);
  unsigned float get_n2(void);
  unsigned int get_matricula(void);
  unsigned float calcula_nf(void);
};
