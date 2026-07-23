# 🎯 Fundamentos de Lógica, Algoritmos e Estrutura de Dados (Engineered in C)

[![C Language]


Este repositório contém a resolução de 15 exercícios estruturais de lógica de programação. A escolha deliberada da **Linguagem C** para este módulo de fixação visa construir uma base técnica em lógica.

Dominar os ponteiros, o gerenciamento de memória manual e as matrizes contíguas do C me dá o embasamento necessário para escrever códigos assíncronos mais performáticos no Node.js e desenhar queries SQL altamente otimizadas, evitando os gargalos comuns.

---

## 🚀 De Baixo Nível (C) para o Alto Nível (JS/TS)

A tabela abaixo conecta a lógica aplicada nestes exercícios em C com os conceitos equivalentes que utilizarei no backend moderno:

| ID | Título do Exercício | Abordagem em C (Baixo Nível) | Equivalência em Node.js (TS) | Link |
| :--- | :--- | :--- | :--- | :--- |
| **01** | Soma de Três | Funções puras e tipagem estática. | Parâmetros fortemente tipados em TS. | [Código](./01)'''''' |
| **02** | Conversor Temp. | Escopo e manipulação de `double`. | Operações matemáticas na engine V8. | [Código](./02) |
| **03** | Par ou Ímpar | Uso do tipo booleano nativo. | Retornos e condicionais estritas (`===`). | [Código](./03) |
| **04** | Calc. de Média | Retorno seguro de strings (`const char*`). | Controle de mutabilidade e constantes. | [Código](./04) |
| **05** | Mult. de Frases | Passagem de ponteiros e iteração linear. | Manipulação de Strings e loops de IO. | [Código](./05) |
| **06** | Soma de Lista | Controle manual do tamanho do array. | Equivalente aos métodos de array (`.reduce()`).| [Código](./06) |
| **07** | Contagem Regressiva | Laço `while` com controle por sentinela. | Estruturas de repetição assíncronas. | [Código](./07) |
| **08** | Localizador Maior | Busca linear em array ($O(n)$). | Algoritmos de busca e ordenação em memória.| [Código](./08) |
| **09** | Filtro Positivos | Alocação dinâmica de memória (`malloc`). | Imutabilidade e criação de novos arrays (`.filter()`).| [Código](./09) |
| **10** | Tabuada Dinâmica | Substituição conceitual do `range()`. | Loops indexados tradicionais para iteração rápida. | [Código](./10) |
| **11** | Busca em Matriz | Ponteiros para o retorno de múltiplos dados. | Desestruturação de Arrays/Objetos e paginação de dados. | [Código](./11) |
| **12** | Diagonal Principal | Otimização de iteração na matriz ($O(n)$). | Varredura inteligente de estruturas de dados aninhadas. | [Código](./12) |
| **13** | Inversor de Vetor | Algoritmo *in-place* com dois ponteiros. | Mutação eficiente em memória sem usar `.reverse()`.| [Código](./13) |
| **14** | Média da Matriz | Varredura de dados contíguos na memória. | Agrupamento de dados bidimensionais. | [Código](./14) |
| **15** | Fatorial com While | Prevenção de estouro numérico (`unsigned long long`). | Entendimento de limites de tipos numéricos e BigInt. | [Código](./15) |

---

## 🛠️ Como Compilar e Testar

Caso queira validar os testes de mesa e a integridade da memória dos algoritmos com o `gcc`:

```bash
gcc main.c -o programa -Wall -Wextra -pedantic
./programa
```

---
