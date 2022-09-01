/*
 * É um projeto simples de um velocimetro para a bike, é apenas o ínicio, ainda falta a correção de muitas coisas
 */


int sensor = 7; //Sensor que recebe cada volta da roda
int contador = 0; //conta a quantidade de voltas em determinado tempo
int tempoVolta = millis();  //referência de tempo
void setup() {
  // put your setup code here, to run once:
  pinMode(contador, INPUT);
  pinMode(led1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //A cada volta da roda, a variável volta recebe HIGH
  int volta = digitalRead(sensor);
  
  //se tiver dado uma volta adicionamos +1 ao contador
  if(volta == HIGH){
      contador++;
      delay(100);
  }
  
  //Verifica quantas voltas foram dads em 1segundo
  if((millis() - tempoVolta) < 1000){
    float velocidade =  contador;
    Serial.println(velocidade);
  //após 1 segundo o tempo e o contador são resetados
  }else{
    tempoVolta = millis();
    contador = 0;
  }
  




}
