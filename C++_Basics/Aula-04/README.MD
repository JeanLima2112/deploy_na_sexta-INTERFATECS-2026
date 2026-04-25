# Tipos Basicos em C++

## Resumo rapido

| Tipo | Uso | Tamanho comum* |
| --- | --- | --- |
| `bool` | Valores logicos (`true` ou `false`) | 1 byte |
| `char` | Um caractere ASCII | 1 byte |
| `int` | Numeros inteiros | 4 bytes |
| `float` | Numeros decimais (precisao simples) | 4 bytes |
| `double` | Numeros decimais (maior precisao) | 8 bytes |

\* O tamanho pode variar dependendo do compilador e da arquitetura.

## Faixa de valores (mais comuns)

- `bool`: `true` ou `false`
- `char`: normalmente de `-128` a `127` (ou `0` a `255` se `unsigned char`)
- `int`: normalmente de `-2147483648` a `2147483647`
- `float`: 2.2e-308 a 1.79e308
- `double`: 1.2e-38 a 3.4e38

## Exemplo rapido

```cpp
bool ativo = true;
char letra = 'A';
int idade = 18;
float altura = 1.75f;
double pi = 3.141592653589793;
```