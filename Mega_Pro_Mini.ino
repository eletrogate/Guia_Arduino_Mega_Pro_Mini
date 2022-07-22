void setup() {
  Serial0.begin (9600); //Estamos usando as portas seriais RX0 e TX0.
  Serial2.begin (9600); //Estamos usando as portas seriais RX1 e TX1.
  Serial3.begin (9600); //Estamos usando as portas seriais RX3 e TX3.
}

void loop() {
  Serial.write ('A'); //Acende o LED.
  delay (1000); //Tempo de espera de 1 segundo.
  Serial.write ('a'); //Desliga o LED.
  delay (1000); //Tempo de espera de 1 segundo.

  Serial1.write ('B'); //Acende o LED.
  delay (2000); //Tempo de espera de 2 segundos.
  Serial1.write ('b'); //Desliga o LED.
  delay (2000); //Tempo de espera de 2 segundos.

  Serial3.write ('C'); //Acende o LED.
  delay (3000); //Tempo de espera de 3 segundos.
  Serial3.write ('c'); //Desliga o LED.
  delay (3000); //Tempo de espera de 3 segundos.
}
