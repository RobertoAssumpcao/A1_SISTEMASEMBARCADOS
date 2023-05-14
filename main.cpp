int Led_Vm_1 = 11; //pino 11 Vermelho
int Led_Am_1 = 10; //pino 10 Amarelo
int Led_Vd_1 = 9; //pino 9 Verde
int Led_Vm_2 = 8; // pino 8 Vermelho
int Led_Am_2 = 7; //pino 7 Amarelo
int Led_Vd_2 = 6;
int Btn_P_1 = 1;//Botao pino 1
int Btn_P_2 = 2;//Botao pino 2
int Btn_P_3 = 3;//Botao pino 3
int Btn_P_4 = 4;//Botao pino 4
int Btn_Reset = 13;
int estadoChave = 0;

int estadoChave2 = 0;
int estadoChave3 = 0;
int estadoChave4 = 0;
void pulaEtapa()
{
  if(estadoChave == HIGH || estadoChave2 == HIGH)
  {
  digitalWrite(Led_Am_1, HIGH);
  delay(500);
  digitalWrite(Led_Am_1, LOW);
  delay(500);
  digitalWrite(Led_Am_1, HIGH);
  delay(500);
  digitalWrite(Led_Am_1, LOW);
  delay(500);
  digitalWrite(Led_Am_1, HIGH);
  delay(500);
  digitalWrite(Led_Am_1, LOW);
  delay(500);
  LetraB();
  }
}
void LetraA(){
digitalWrite(Led_Vd_1, HIGH);
delay(3000);
digitalWrite(Led_Vd_1, LOW);
digitalWrite(Led_Am_1, HIGH);
delay(500);
digitalWrite(Led_Am_1, LOW);
delay(500);
digitalWrite(Led_Am_1, HIGH);
delay(500);
digitalWrite(Led_Am_1, LOW);
delay(500);
digitalWrite(Led_Am_1, HIGH);
delay(500);
digitalWrite(Led_Am_1, LOW);
delay(500);
LetraB();
}
void LetraB(){
digitalWrite(Led_Vm_1, HIGH);
digitalWrite(Led_Vd_2, HIGH);
delay(2000);
digitalWrite(Led_Vm_1, LOW);
digitalWrite(Led_Vd_2, LOW);

digitalWrite(Led_Am_2, HIGH);
delay(500);
digitalWrite(Led_Am_2, LOW);
delay(500);
digitalWrite(Led_Am_2, HIGH);
delay(500);
digitalWrite(Led_Am_2, LOW);
delay(500);
digitalWrite(Led_Am_2, HIGH);
delay(500);
digitalWrite(Led_Am_2, LOW);
delay(500);
LetraC();
}
void LetraC(){
digitalWrite(Led_Vm_2, HIGH);
digitalWrite(Led_Vd_1, HIGH);
LetraA();
}
void setup()
{
pinMode(Btn_Reset, INPUT_PULLUP); pinMode(Led_Vm_1, OUTPUT);
pinMode(Led_Am_1, OUTPUT);
pinMode(Led_Vd_1, OUTPUT);
pinMode(Led_Vm_2, OUTPUT);
pinMode(Led_Am_2, OUTPUT);
pinMode(Led_Vd_2, OUTPUT);
}
void loop()
{
estadoChave = digitalRead(Btn_P_1);
estadoChave2 = digitalRead(Btn_P_2);
estadoChave3 = digitalRead(Btn_P_3);
estadoChave4 = digitalRead(Btn_P_4);
if(digitalRead(Btn_Reset) == LOW){
delay(100);
if(digitalRead(Btn_Reset) == LOW){
asm volatile(" jmp 0");
}
}
if(estadoChave == HIGH || estadoChave2 == HIGH)
{

digitalWrite(Led_Vm_1, HIGH);
digitalWrite(Led_Vm_2, HIGH);
delay(5000);
digitalWrite(Led_Vm_1, LOW);
LetraA();
}
else
{
digitalWrite(Led_Vm_1, HIGH);
digitalWrite(Led_Vm_2, HIGH);
delay(1000);
digitalWrite(Led_Vm_1, LOW);
digitalWrite(Led_Vm_2, LOW);
delay(1000);
}
}
