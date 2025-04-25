int ledVermelho = 6;
int ledAmarelo = 7;
int ledVerde = 8;
int buzzer = 10;

void setup(){
    Serial.begin(9600);
    pinMode(ledVermelho, OUTPUT);

      Serial.begin(9600);
      pinMode(ledAmarelo, OUTPUT);

      Serial.begin(9600);
      pinMode(ledVerde, OUTPUT);
 
}

void loop(){

  int LDR = analogRead(A0);
  Serial.println(LDR);

  if (LDR < 800){
    noTone(buzzer);
      digitalWrite (ledVerde, HIGH);
    digitalWrite (ledAmarelo, LOW);
    digitalWrite (ledVermelho, LOW);
  }
  else if (LDR >= 850 && LDR <= 949){
    noTone(buzzer);
    digitalWrite (ledAmarelo, HIGH);
    digitalWrite (ledVerde, LOW);
    digitalWrite (ledVermelho, LOW);
  }
  else if (LDR > 950){
    noTone(buzzer);
    digitalWrite (ledAmarelo, LOW);
    digitalWrite (ledVerde, LOW);
    digitalWrite (ledVermelho, HIGH);
    tone(buzzer, 1000);
    delay(3000);
    noTone(buzzer);
    delay(3000);
  }


}