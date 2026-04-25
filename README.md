# Tutorial: Compilação de Programas C++ com GCC/G++

Este tutorial mostra como compilar e executar programas escritos em C++ usando o compilador **g++** (GNU C++ Compiler).

---

## 📋 Pré-requisitos

Antes de começar, certifique-se de ter instalado:

- **g++** (compilador GNU C++)
- Um editor de texto ou IDE (VS Code, Code::Blocks, etc.)
- Terminal ou Prompt de Comando

Para verificar se o g++ está instalado:
```bash
g++ --version
```

---

## 🚀 Como Compilar um Programa C++

A sintaxe básica para compilar um arquivo C++ é:

```bash
g++ <arquivo.cpp> -o <nome-do-binario>
```

### Explicação dos parâmetros:
- **`<arquivo.cpp>`** - O arquivo de código-fonte que você deseja compilar
- **`-o`** - Flag que especifica o nome do arquivo executável de saída
- **`<nome-do-binario>`** - O nome que você quer para o programa compilado

---

## 💡 Exemplo Prático

### Passo 1: Criar um arquivo C++

Crie um arquivo chamado `001.cpp` com o seguinte conteúdo:

```cpp
#include <iostream>

int main() {
    std::cout << "Olá, Mundo!" << std::endl;
    return 0;
}
```

### Passo 2: Compilar o programa

No terminal, execute:

```bash
g++ 001.cpp -o 001
```

Isso criará um arquivo executável chamado `001` (ou `001.exe` no Windows).

### Passo 3: Executar o programa

**No Linux/Mac:**
```bash
./001
```

**No Windows (PowerShell ou CMD):**
```bash
001.exe
```

Ou simplesmente:
```bash
001
```

---

## ▶️ Como Executar Programas C++

Depois de compilar seu programa, existem várias formas de executá-lo:

### Execução Básica

O jeito mais simples é executar o binário gerado:

```bash
./programa        # Linux/Mac
programa.exe      # Windows
```

### Com Argumentos de Linha de Comando

Se seu programa aceita argumentos, você pode passá-los ao executar:

```bash
./programa argumento1 argumento2

# Exemplo com números
./calculadora 5 3
```

### Capturando Entrada do Usuário

Se o programa pede entrada, simplesmente digite quando solicitado:

```bash
./programa
Digite um número: 42
Resultado: 84
```

### Redirecionando Entrada e Saída

Você também pode usar redirecionamento de arquivos:

```bash
# Salvar saída em um arquivo
./programa > resultado.txt

# Ler entrada de um arquivo
./programa < dados.txt

# Fazer ambos
./programa < entrada.txt > saida.txt

# Anexar saída a um arquivo
./programa >> resultado.txt
```

### Exemplo Prático Completo

Crie um programa que soma dois números:

```cpp
#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Digite o primeiro número: ";
    std::cin >> a;
    
    std::cout << "Digite o segundo número: ";
    std::cin >> b;
    
    std::cout << "Soma: " << (a + b) << std::endl;
    
    return 0;
}
```

Compile:
```bash
g++ soma.cpp -o soma
```

Execute:
```bash
./soma
Digite o primeiro número: 10
Digite o segundo número: 5
Soma: 15
```

### Passando Argumentos via Linha de Comando

Se quiser receber argumentos diretamente:

```cpp
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "Uso: " << argv[0] << " <numero1> <numero2>" << std::endl;
        return 1;
    }
    
    int a = std::stoi(argv[1]);
    int b = std::stoi(argv[2]);
    
    std::cout << "Soma: " << (a + b) << std::endl;
    
    return 0;
}
```

Execute:
```bash
g++ soma.cpp -o soma
./soma 10 5
Soma: 15
```

---

## 🔍 Troubleshooting: Problemas Comuns

| Problema | Solução |
|----------|---------|
| "Comando não encontrado" | Verifique se está no diretório correto e se o binário foi criado |
| "Permission denied" (Linux/Mac) | Use `chmod +x programa` para dar permissão de execução |
| "Não há resposta" | Pode estar aguardando entrada; digite algo e pressione Enter |
| "Programa trava" | Pode ter um loop infinito; pressione `Ctrl+C` para interromper |

---

## 🎯 Opções Úteis do g++

Aqui estão algumas flags úteis que você pode usar:

| Flag | Descrição | Exemplo |
|------|-----------|---------|
| `-o` | Define o nome do executável | `g++ prog.cpp -o meu_prog` |
| `-Wall` | Mostra todos os avisos | `g++ prog.cpp -Wall -o prog` |
| `-g` | Inclui informações de debug | `g++ prog.cpp -g -o prog` |
| `-O2` | Otimiza o código | `g++ prog.cpp -O2 -o prog` |
| `-c` | Apenas compila (sem linkar) | `g++ prog.cpp -c` |

---

## 📌 Dicas Importantes

1. **Nomes de Arquivo**: Use extensão `.cpp` para seus arquivos fonte
2. **Nomes de Variáveis**: No Windows, evite caracteres especiais nos nomes executáveis
3. **Diretório de Saída**: O executável é criado no mesmo diretório onde você executou o comando
4. **Múltiplos Arquivos**: Para compilar vários arquivos, liste todos:
   ```bash
   g++ arquivo1.cpp arquivo2.cpp arquivo3.cpp -o programa
   ```



