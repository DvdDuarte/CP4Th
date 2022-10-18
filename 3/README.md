# Exercicios

## 2

### A)

- Matriz B não está transposta
- C está sempre a escrever no mesmo sitio

### B)

```Python
ijk \ 
    Mesmo problema
jik / 

jki \
    C e A acedido por coluna, B constante
kji /

# Benificia a Vectorização
ikj \
    C e B acedido por linha, A constante
kij /
```


### C)

 Version    |  Time  |  CPI   | #I Estimated  | #I (inst_retired.any) | L1_DMiss  | Miss / #I
 :-----:    | :----: | :----: | :----:        | :----:                | :----:    | :----: 
 ikj()      |  0.17  |  0.4   |  7 * N³       |       977453675       | 17096637  | 0.017
 ikj_vect() |  0.078 |  0.3   | 8 / 2 * N³    |       578314953       | 17047270  | 0.029

gain = 0.029 / 0.017 = 1.70588


## 3

### A)
```
2.5 GHz * 256 / 64 * 2 = 20 Gflops
           \   /
           Doubles




```
### B)


### C)