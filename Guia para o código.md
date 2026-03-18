Oii!!
Precisamos receber input de 18 botão push button, controlar 16 leds, 16 motores, receber pagamento com a maquinha pela esp32 e ainda pesar as 
moedas e validar a compra, além do cooler que precisa de um regulamento na temperatura(ex: deixar em 15C)
A lógica é:
1. O usuário vai na máquina
2. Ele clica em um dos botões de comida
3. Ele escolhe a forma de pagamento em 1 outro botão(são 2 formas de pagamento, ou seja, 2 botão)
4. Caso 1 - Maquininha
    5. O ESP32 entra em contato com a maquininha e o usuário escolhe a forma de pagamento(debito ou credito)
    6. O ESP32 prossegue com o valor
    7. O usuário paga e o ESP32 recebe
    8. A maquininha é desligada
4. Caso 2 - Fichas
    5. O usuário coloca a qauntidade de fichas correspondentes
    6. O Arduino vai pesando com o sensor
    7. O servo mexe e derruba as ficha no repositório de fichas
    8. O servo volta ao normal
9. O Arduino liga o LED do compartimento da comida escolhida
10. O Arduino gira o motor no tempo certo até cair
11. O Arduino desliga o LED e para de girar após dar o tempo programado
