int blue_1 = 22;
int green_1 = 24;
int white_1 = 26;
int yellow_1 = 28;
int red_1 = 30;
int blue_2 = 32;
int green_2 = 34;
int white_2 = 36;
int yellow_2 = 38;
int red_2 = 40;
int blue_3 = 42;
int green_3 = 44;
int white_3 = 46;
int yellow_3 = 48;
int red_3 = 50;


void sequence_1() {

  digitalWrite(blue_1, HIGH);
  delay(1000);
  digitalWrite(blue_2, HIGH);
  delay(1000);
  digitalWrite(blue_3, HIGH);
  delay(1000);
  digitalWrite(blue_1, HIGH);
  digitalWrite(blue_2, HIGH);
  digitalWrite(blue_3, HIGH);
  delay(1000);
  digitalWrite(blue_1, LOW);
  digitalWrite(blue_2, LOW);
  digitalWrite(blue_3, LOW);
  delay(1000);
  digitalWrite(green_1, HIGH);
  delay(1000);
  digitalWrite(green_2, HIGH);
  delay(1000);
  digitalWrite(green_3, HIGH);
  delay(1000);
  digitalWrite(green_1, HIGH);
  digitalWrite(green_2, HIGH);
  digitalWrite(green_3, HIGH);
  delay(1000);
  digitalWrite(green_1, LOW);
  digitalWrite(green_2, LOW);
  digitalWrite(green_3, LOW);
  delay(1000);
  digitalWrite(white_1, HIGH);
  delay(1000);
  digitalWrite(white_2, HIGH);
  delay(1000);
  digitalWrite(white_3, HIGH);
  delay(1000);
  digitalWrite(white_1, HIGH);
  digitalWrite(white_2, HIGH);
  digitalWrite(green_3, HIGH);
  delay(1000);
  digitalWrite(white_1, LOW);
  digitalWrite(white_2, LOW);
  digitalWrite(green_3, LOW);
  delay(1000);
  digitalWrite(yellow_1, HIGH);
  delay(1000);
  digitalWrite(yellow_2, HIGH);
  delay(1000);
  digitalWrite(yellow_3, HIGH);
  delay(1000);
  digitalWrite(yellow_1, HIGH);
  digitalWrite(yellow_2, HIGH);
  digitalWrite(yellow_3, HIGH);
  delay(1000);
  digitalWrite(yellow_1, LOW);
  digitalWrite(yellow_2, LOW);
  digitalWrite(yellow_3, LOW);
  delay(1000); 
  digitalWrite(yellow_1, HIGH);
  delay(1000);
  digitalWrite(red_2, HIGH);
  delay(1000);
  digitalWrite(red_3, HIGH);
  delay(1000);
  digitalWrite(red_1, HIGH);
  digitalWrite(red_2, HIGH);
  digitalWrite(red_3, HIGH);
  delay(1000);
  digitalWrite(red_1, LOW);
  digitalWrite(red_2, LOW);
  digitalWrite(red_3, LOW);
  delay(1000); 
}

void sequence_2(){
  digitalWrite(red_1, HIGH);
  delay(1000);
  digitalWrite(red_2, HIGH);
  delay(1000);
  digitalWrite(red_3, HIGH);
  delay(3000);
  digitalWrite(blue_1, HIGH);
  digitalWrite(red_3, HIGH);
  delay(1000);
  digitalWrite(blue_1, LOW);
  digitalWrite(red_3, LOW);
  delay(1000);
  digitalWrite(green_1, HIGH);
  digitalWrite(yellow_3, HIGH);
  delay(1000);
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_3, LOW);
  delay(1000);
  digitalWrite(white_1, HIGH);
  digitalWrite(white_3, HIGH);
  delay(1000);
  digitalWrite(white_1, LOW);
  digitalWrite(white_3, LOW);
  delay(1000);
  digitalWrite(yellow_1, HIGH);
  digitalWrite(green_3, HIGH);
  delay(1000);
  digitalWrite(yellow_1, LOW);
  digitalWrite(green_3, LOW);
  delay(1000);
  digitalWrite(red_1, HIGH);
  digitalWrite(blue_3, HIGH);
  delay(1000);
  digitalWrite(red_1, LOW);
  digitalWrite(blue_3, LOW);
  delay(1000);
  digitalWrite(blue_2, HIGH);
  digitalWrite(red_2, HIGH);
  delay(1000);
  digitalWrite(blue_2, LOW);
  digitalWrite(red_2, LOW);
  delay(1000);
  digitalWrite(green_2, HIGH);
  digitalWrite(yellow_2, HIGH);
  delay(1000);
  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, LOW);
  delay(1000);
  digitalWrite(white_2, HIGH);
  delay(2000);
  digitalWrite(white_2, LOW);
  delay(1000);

}
void setup(){
  pinMode(22, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(50, OUTPUT);  
}


void loop(){
  sequence_1();
  sequence_2();

}
  
    
