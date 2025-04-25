int led = 4;
int button=10;
int buttonstate=0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop()
{
buttonstate=digitalRead(button);
  if(buttonstate==LOW){
    digitalWrite(led, HIGH);}
  else if(buttonstate==HIGH){
    digitalWrite(led, LOW);}
}