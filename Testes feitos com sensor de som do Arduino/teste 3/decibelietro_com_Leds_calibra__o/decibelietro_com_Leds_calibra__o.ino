
/* Código para mostrar valor em dB */
const int PinoSensor = A0; //pino Anlógico de Entrada 0
const int PinoDigital = 0;
//int Estado = 0;
int ValorSensor = 0;
int valorMaior = 0;
float tensao = 0;
int dB = 0;
int cont = 0;


#define led1 3 // pinos em que os leds serão conectado
#define led2 4
#define led3 5
#define led4 6
#define led5 7
#define led6 8
#define led7 9
#define led8 10
void setup()
{
  Serial.begin(9600);
  pinMode(0, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}
void loop()
{

  ValorSensor = analogRead(PinoSensor);
 
  
  tensao =  ValorSensor / 1023.0 * 5.0;
  dB = 62 * tensao - 75, 4;
  if (dB < 0)
  {
    dB = 0;
  }
  if (dB > 30) {
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(led1, LOW);
  }
  if (dB > 40) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }
  if (dB > 50) {
    digitalWrite(led3, HIGH);
  } else {
    digitalWrite(led3, LOW);
  }
  if (dB > 60) {
    digitalWrite(led4, HIGH);
  } else {
    digitalWrite(led4, LOW);
  }
  if (dB > 87) {
    digitalWrite(led5, HIGH);
  } else {
    digitalWrite(led5, LOW);
  }
  if (dB > 100) {
    digitalWrite(led6, HIGH);
  } else {
    digitalWrite(led6, LOW);
  }
  if (dB > 112) {
    digitalWrite(led7, HIGH);
  } else {
    digitalWrite(led7, LOW);
  }
  if (dB > 120) {
    digitalWrite(led8, HIGH);
  } else {
    digitalWrite(led8, LOW);
  }
  //Serial.print("Tensao: ");
  //Serial.print(tensao);
  //Serial.println(" V");
  Serial.print("Intensidade: ");
  Serial.print(dB);
  Serial.println(" dB");

  delay(1000);
}
