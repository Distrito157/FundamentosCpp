#include <iostream>
#include <string>

using namespace std;

int main () {

  std::string nome;

  cout << "Alguns métodos de strings:\n";

  cout << "----------------------------------\n";
  /*  NOTE: -> std::getline
      Neste exemplo, std::getline lê uma linha de texto da entrada padrão (std::cin)
      e a armazena na variável nome. O programa então exibe a linha lida.
      O getline é útil quando você precisa lidar com entradas de texto que podem conter
      espaços em branco. 
  */
  cout << "Digite seu nome: ";
  std::getline(cin, nome);
  cout << "Seu nome é: " << nome << '\n';

  cout << "----------------------------------\n";

  /*  NOTE: -> length() 
      Retorna o comprimento da string, é equivalente ao método
      size e ambos podem ser usados para retornar o comprimento
      de uma string em C++
  */
  cout << "Comprimento do seu nome é: " << nome.length() << '\n';

  cout << "----------------------------------\n";

  /*  NOTE: -> empty()
      verifica se a string está vazia usando o método empty
      Neste exemplo, nome.empty() retornaria false,
      já que a string contém caracteres. Se a string fosse
      definida como std::string nome = "";, então nome.empty() retornaria true
  */
  if (nome.empty()) {
    cout << "A string está vazia.\n"; 
  } else {
    cout << "A string não está vazia.\n";
  }

  cout << "----------------------------------\n";

  /*  NOTE: -> clear()
      Neste exemplo, nome.clear() remove todos os caracteres da string,
      deixando-a vazia. Após a chamada de clear, a segunda exibição mostrará
      que a string está vazia.
  */
  cout << "String original: " << nome << '\n';
  nome.clear();
  cout << "String após o clear: " << nome << '\n';

  cout << "----------------------------------\n";

  /*  NOTE: -> append()
      O método append da classe std::string em C++
      é utilizado para concatenar (adicionar) uma string à outra.
      Ele pode ser usado de várias maneiras para adicionar caracteres,
      substrings ou outras strings ao final da string existente.
  */
  nome = "Felipi";
  std::string sobreNome = " Soares de Oliveira";
  nome.append(sobreNome);

  cout << "Meu nome com o método append(): " << nome << '\n';

  //  NOTE: -> Usando o operador += como alternativa ao append()
  nome = "Felipi";
  nome += sobreNome;

  cout << "Meu nome com o operador +=: " << nome << '\n';

  cout << "----------------------------------\n";

  /*  NOTE: -> at()
      O método at() da classe std::string em C++ é utilizado
      para acessar um caractere específico na posição indicada
      dentro da string. Ele oferece uma maneira segura de acessar
      caracteres, pois verifica se a posição fornecida está dentro
      dos limites da string.
      Uma vantagem do método at() sobre o uso do operador de acesso
      direto ([]) é que at() verifica se a posição fornecida está dentro
      dos limites válidos da string e, se não estiver, lança uma exceção
      std::out_of_range. Isso ajuda a evitar erros de acesso a memória não alocada.
  */
  char caractere = nome.at(4); // Lembrando que começa do indice 0
  cout << "Caractere na posição 4: " << caractere << '\n';

  cout << "----------------------------------\n";


  /*  NOTE: -> insert()
      O método insert() da classe std::string em C++ é utilizado para
      inserir substrings, caracteres ou outras strings em uma posição
      específica dentro da string existente. Ele oferece uma maneira
      flexível de modificar o conteúdo de uma string.
  */
  nome = "Felipi";
  nome.insert(6, " Soares");
  cout << "Meu nome com insert(): " << nome << '\n';

  cout << "----------------------------------\n";
  
  return 0;
}
