# 🍷 Adega Climatizada com Arduino

Este projeto consiste em uma **adega climatizada automatizada**, utilizando um **Arduino Uno** para monitoramento da temperatura interna da adega e acionamento de indicadores visuais e sonoros conforme a variação da temperatura.

---

## 🔧 Componentes Utilizados

- Arduino Uno  
- Sensor de temperatura (LDR adaptado para sensibilidade térmica)  
- Protoboard (matriz de contato)  
- LED Verde (temperatura ideal)  
- LED Amarelo (temperatura levemente elevada)  
- LED Vermelho (temperatura crítica)  
- Buzina / Buzzer piezoelétrico  
- Resistores e jumpers  

---

## ⚙️ Funcionamento

O sistema monitora constantemente a temperatura da adega e sinaliza visualmente (e sonoramente, quando necessário) a situação atual:

| Temperatura                | LED Ativado | Buzina |
|---------------------------|-------------|--------|
| Dentro do ideal           | Verde       | ❌     |
| Levemente acima do ideal  | Amarelo     | ❌     |
| Muito acima do ideal      | Vermelho    | ✅     |

---

## 🔌 Esquemático de Ligação

O sensor (LDR) está conectado à entrada analógica do Arduino.  
Os LEDs estão ligados a portas digitais, cada um com um resistor apropriado.  
A buzina também está conectada a uma porta digital e é acionada apenas em casos críticos.

---

## 🧑‍💻 Componentes do Grupo
Eduardo Duran - 562017

Eduardo Ulisses - 566339

Henrique Guedes - 562474

Fernando Bellegarde - 564169

Otávio Inaba - 565003

---

## 🧠 Lógica do Código (pseudocódigo)

```cpp
ler valor do sensor LDR;
se valor estiver dentro da faixa ideal:
    acender LED verde;
senão se valor estiver levemente acima:
    acender LED amarelo;
senão:
    ascender LED vermelho;
    acionar buzina;
