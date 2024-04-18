 ### Exercícios Lógica : Victor Gabriel Lucio

### QUESTÃO 1
# Exemplo: nome = Victor, sobrenome = Gabriel
L1 = ["V", "i", "c", "t", "o", "r"]
L2 = ["G", "a", "b", "r", "i", "e", "l"]
L3 = L1 + L2

### QUESTÃO 2
C1 = set(L1)
C2 = set(L2)
C3 = set(L3)

### QUESTÃO 3
COMP1 = (len(L1), len(C1))

### QUESTÃO 4
COMP2 = (len(L2), len(C2))
COMP3 = (len(L3), len(C3))

### QUESTÃO 5
# Os valores retornados em COMP1, COMP2 e COMP3 são diferentes, 
# pois, o comprimento das listas e a cardinalidades dos conjuntos podem ser diferentes.

### QUESTÃO 6
LisUniao = L1 + L2

### QUESTÃO 7
ConjUniao = set(L1) | set(L2)

### QUESTÃO 8
LisInter = list(set(L1) & set(L2))

### QUESTÃO 9
ConjInter = C1.intersection(C2)

### QUESTÃO 10
## len(LisUniao) = 13, um exemplo de nome seria "Vilmore Shwartz",
## que também possui a cardinalidade = 13.


