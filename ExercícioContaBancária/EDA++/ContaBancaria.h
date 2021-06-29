
// definição do tipo
typedef struct {
    int numero;
    double saldo;
} ContaBancaria;
// cabeçalho das funções
void Inicializa (ContaBancaria&, int, double);
void Deposito (ContaBancaria&, double);
void Saque (ContaBancaria&, double);
void Imprime (ContaBancaria);
// obs: A passagem por referencia (&) só existe em
// c++. Em breve vamos ver como fazer em c
