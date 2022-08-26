int setaE = 9; //seta esquerda
int setaD = 8;//seta direita
int botaoE = 10; //botao esquerda
int botaoD = 11; //botao direita
int pressE = 0;  //pressionado esquerda
int pressD = 0;  //pressionado direita
void pisca(int direcao){
  digitalWrite(direcao, HIGH);
  delay(500);
  digitalWrite(direcao, LOW);
  delay(500);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(setaE, OUTPUT);
  pinMode(setaD, OUTPUT);
  pinMode(botaoE, INPUT);
  pinMode(botaoD, INPUT);

}


void loop() {
  // put your main code here, to run repeatedly:
  pressE = digitalRead(botaoE);
  if(pressE == HIGH){
    pisca(setaE);
  }else{
    digitalWrite(setaE, LOW);
  }

  pressD = digitalRead(botaoD);
  if(pressD == HIGH){
    pisca(setaD);
  }else{
    digitalWrite(setaD, LOW);
  }
  
}
