int led1 = A0;
int led2 = A1;
int t1 = 500;



void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  pinMode(D0, INPUT_PULLUP);
  pinMode(D1, INPUT_PULLUP);
  //Serial.begin(9600);
}
void loop() {

  if(digitalRead(D0) == LOW && digitalRead(D1) == LOW){ //When both switches are pressed
      digitalWrite(A0, HIGH); //Turns light A0 on
      digitalWrite(A1, HIGH); //Turns light A1 on
    }
    else
    {

  if(digitalRead(D0) == LOW){ //When switch is pressed
      digitalWrite(A0, HIGH); //Turns light on
      digitalWrite(A1, HIGH); //Turns light on
      delay(random(500, 2000));
      digitalWrite(A0, LOW); //Turns light off
      digitalWrite(A1, LOW); //Turns light off
      delay(500);
    }
  else
      digitalWrite(A0, LOW); //If not pressed keep off

  if(digitalRead(D1) == LOW){ //When switch is pressed
      digitalWrite(A1, HIGH); //Turns light on
      digitalWrite(A0,LOW); //Turns light off
      delay(500);
      digitalWrite(A1, LOW); //Turns light off
      digitalWrite(A0, HIGH); //Turns light on
      delay(500);
    }
  else
      digitalWrite(A1, LOW); //If not pressed keep off

    }
      //Both pressed = stay on
      //If both on,
      //Light LED 1 and 2
}
