const int BTN = 2;
int state = 0;

void setup() {
  
  pinMode(LED_BUILTIN, OUTPUT); //init LED_BUILTIN as output
  pinMode(BTN,INPUT);   //init pin BTN as input

}


void loop() {
  
  if(digitalRead(BTN)==HIGH){   //if btn was pressed
    
    delay(50);        //delay to avoid debounce effect
    
    state=state==HIGH?LOW:HIGH;   //toggle state of LED
  }
  
  digitalWrite(LED_BUILTIN,state);

}
