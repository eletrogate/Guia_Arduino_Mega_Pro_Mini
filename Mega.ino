#define led 13 //Define o led do próprio Arduino como porta 13.

void setup() {
  Serial1.begin (9600);    //Iniciando a comunicação serial RX e TX.
  pinMode (led,OUTPUT);    //Controlar o led para acender.
  digitalWrite(led, LOW);  //Iniciando com o led desligado.
}

void loop() {
  if (Serial1.available()>0){ //Se tiver alguma coisa na porta serial ele avisa a programação.
      char c=Serial1.read();  //Ler este dado e armazenar na variável c.
      if (c=='B'){
          digitalWrite(led,HIGH);
      }

      if (c=='b'){
          digitalWrite(led,LOW);
       }
   }
}
