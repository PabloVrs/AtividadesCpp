// Algoritmo: Selection Sort
// Vetor inicial: 3 4 9 2 5 1 8

// Passo 1: menor elemento entre [3 4 9 2 5 1 8] é 1 → troca com 3
// (1) | 4 9 2 5 3 8

// Passo 2: menor entre [4 9 2 5 3 8] é 2 → troca com 4
// 1 (2) | 9 4 5 3 8

// Passo 3: menor entre [9 4 5 3 8] é 3 → troca com 9
// 1 2 (3) | 4 5 9 8

// Passo 4: menor entre [4 5 9 8] é 4 → já está na posição
// 1 2 3 (4) | 5 9 8

// Passo 5: menor entre [5 9 8] é 5 → já está na posição
// 1 2 3 4 (5) | 9 8

// Passo 6: menor entre [9 8] é 8 → troca com 9
// 1 2 3 4 5 (8) | 9

// Passo 7: só resta o último elemento
// 1 2 3 4 5 8 (9)

///////////////////////////////////////////////////////////////////////////////////////////////////////////

// Algoritmo: Insertion Sort
// Vetor inicial: 3 4 9 2 5 1 8

// Passo 1: 4 já está em ordem com 3
// (3 4) | 9 2 5 1 8

// Passo 2: 9 também está em ordem
// (3 4 9) | 2 5 1 8

// Passo 3: 2 é menor → insere entre 3 e 4
// (2 3 4 9) | 5 1 8

// Passo 4: 5 é menor que 9 → insere entre 4 e 9
// (2 3 4 5 9) | 1 8

// Passo 5: 1 é menor que todos → vai para o início
// (1 2 3 4 5 9) | 8

// Passo 6: 8 é menor que 9 → insere antes de 9
// (1 2 3 4 5 8 9)
