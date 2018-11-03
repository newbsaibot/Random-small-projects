int redLED = 13; //Declaring the red led and giving a value of the 13th pin
int yellowLED = 9;
int whiteLED = 7;
int greenLED = 11;
int blueLED = 12;
int redOffTime = 800;
int redOnTime = 500;
int yellowOnTime = 300;
int yellowOffTime = 100;//Eveything above void setup (), are all global variables(not a so great practice but will do for this example)
int whiteOffTime =200;
int whiteOnTime = 450;
int greenOffTime = 850;
int greenOnTime = 665;
int blueOffTime = 200;
int blueOnTime = 600;
int numYellowBlinks; //Number of times to blink yellow LED
int numRedBlinks; //Number of times to blink red LED
int numWhiteBlinks = 5; //Number of times to blink white LED
int numGreenBlinks; //Number of times to blink green LED
int numBlueBlinks = 4; //Number of times to blink blue LED


String redMessage= ("The RED LED is Blinking");//Declaring a string variable. In this case redMessage will print out the given vale in quotations
String yellowMessage =("The YELLOW LED is Blinking");
String whiteMessage= ("The WHITE LED is Blinking");
String greenMessage= ("The GREEN LED is Blinking");
String blueMessage= ("The BLUE LED is Blinking");
int writeValueWhite;//declare variable for wriiteValue
int writeValueBlue;//declare variable for wriiteValue


void setup() {
  // put your setup code here, to run once:
  //Setting Up my variables for clen easy code and easy changes if needed.
  Serial.begin(9600);
  pinMode(redLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(whiteLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
  


}

void loop() {

  // put your main code here, to run repeatedly:
   Serial.println("How Many Times Do You Want the Red LED to blink?"); //Prompt User for Input
   while(Serial.available()==0) {} // Wait for User to Input Data  
   numRedBlinks=Serial.parseInt();  //Read the data the user has input
   Serial.parseInt();

  Serial.println("How Many Times Do You Want the Yellow LED to blink?"); //Prompt User for Input
  while(Serial.available()==0) {} // Wait for User to Input Data  
  numYellowBlinks=Serial.parseInt();//Read the data the user has input
  Serial.parseInt();

  Serial.println("What number do you want to write to White LED (0-255)?"); //Prompt User for Input
  while(Serial.available()==0) {} // Wait for User to Input Data  
  writeValueWhite=Serial.parseInt();//Read the data the user has input
  Serial.parseInt();

  Serial.println("How Many Times Do You Want the Green LED to blink?"); //Prompt User for Input
  while(Serial.available()==0) {} // Wait for User to Input Data  
  numGreenBlinks=Serial.parseInt();//Read the data the user has input
  Serial.parseInt();

  Serial.println("What number do you want to write to Blue LED (0,255)?"); //Prompt User for Input
  while(Serial.available()==0) {} // Wait for User to Input Data  
  writeValueBlue = Serial.parseInt();//Read the data the user has input
  Serial.parseInt();

  
  Serial.println(redMessage);
    int i = 1;
    while (i <= numRedBlinks)  {
      Serial.print("  you are on Red Blink #: ");
      Serial.println(i);
      analogWrite(redLED,255);//applying analog voltage to pin
      delay(redOnTime);
      analogWrite(redLED,0);//applying analog voltage to pin
      delay(redOffTime);
      i = i + 1;

  }
  Serial.println("");
  Serial.println(yellowMessage);
      int x = 1;
      while (x <= numYellowBlinks){
      Serial.print("  You are on Yellow Blink #: ");
      Serial.println(x);
      analogWrite(yellowLED,102);//applying analog voltage to pin 
      delay(yellowOnTime);
      analogWrite(yellowLED,0);//applying analog voltage to pin
      delay(yellowOffTime);
      x = x + 1;

     
     
    
  
  }

  
    Serial.println("");
    Serial.println(whiteMessage);
        int y = 1;
        while (y <= numWhiteBlinks){
        Serial.print("  You are on white Blink #: ");
        Serial.println(y);
        analogWrite(whiteLED,writeValueWhite);//turn white light on 
        delay(whiteOnTime);
        analogWrite(whiteLED,0);//turn white light off
        delay(whiteOffTime);
        y = y + 1;

     
     
    
  
  }


    Serial.println("");
    Serial.println(greenMessage);
        int a = 1;
        while ( a <= numGreenBlinks){
        Serial.print("  You are on white Blink #: ");
        Serial.println(a);
        analogWrite(greenLED,204);//turn green light on 
        delay(whiteOnTime);
        analogWrite(greenLED,0);//turn green light off
        delay(greenOffTime);
        a = a + 1;
        

     
     
    
  
  }

    Serial.println("");
    Serial.println(blueMessage);
        int j = 1;
        while (j <=writeValueBlue){
        Serial.print("  You are on Blue Blink #: ");
        Serial.println(j);
        analogWrite(blueLED,writeValueBlue);//turn blue light on 
        delay(blueOnTime);
        analogWrite(blueLED,0);//turn blue light off
        delay(blueOffTime);
        j = j + 1;
        Serial.println("");

     
     
    
  
  }

  
Serial.println("");
  
}
