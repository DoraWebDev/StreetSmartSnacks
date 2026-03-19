//Variáveis
int leds [ 16 ] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26}; // Array para os pinos dos LEDs(Dora)
int motores [ 16 ] = {31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46}; // Array para os pinos dos motores(Dora)




void setup() {
    //For que configura os outputs dos LEDS(Dora)
    for (int i = 0; i < 16; i++) {
        pinMode(leds[i], OUTPUT);
    }
    //For que configura os outputs dos motores(Dora)
    for (int i = 0; i < 16; i++) {
        pinMode(motores[i], OUTPUT);
    }
}




void loop() {

}
