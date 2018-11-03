void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;//Declare i as an int and set it to the number 1
  while (i<=19  ){
   Serial.print("You are on LOOP SPACE # ");
   i = i + 1;
   Serial.println(i);
   delay(250);
   
   
    }
    Serial.println(" ");
    
}
