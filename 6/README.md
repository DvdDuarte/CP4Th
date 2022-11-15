# Open MP

The number of threads used by OpenMP, by default, equals the number of virtual cores (or --cpus-pertasks)

``$ export OMP_NUM_THREADS=N``  

[Diretrizes Tabela](img/diretrizes.png)

## 1

### A) Como varia o valor inicial de w com as diretrizes de 1.0 a 1.4?

#### 1.0 - Sem diretrizes
**Valor de w inicial** = 10 </br>
**Valor de w final** = 110 </br>

#### 1.1 - private(w): cria variaveis privadas (w0 = 0 & w1 = 0) para cada thread... a variavel global inicial não é alterado
**Valor de w inicial** = 10 </br>
**Valor de w final** = 10 </br>

#### 1.2 - firstprivate(w): cria variaveis privadas (w0 = w & w1 = w) para cada thread... a variavel global inicial não é alterado
**Valor de w inicial** = 10 </br>
**Valor de w final** = 10 </br>

#### 1.3 - lastprivate(w): cria variaveis privadas (w0 = 0 & w1 = 0) para cada thread... a variavel global inicial fica com o valor final das privadas (w = w0 || w = w1) de acordo com a que acabou primeiro
**Valor de w inicial** = 10 </br>
**Valor de w final** = 50 </br>

#### 1.4 - reduction(w): cria variaveis privadas (w0 = 0 & w1 = 0) para cada thread... w += w0 + w1
**Valor de w inicial** = 10 </br>
**Valor de w final** = 110 </br>

### B) O valor final de w dentro do loop varia na utilização das diretrizes de 1.0 a 1.4?
Varia dependendo da diretriz usada.

### C) O valor final de w após a execução é o esperado?
Sim dependendo da diretriz usada

## 2 - Data Races