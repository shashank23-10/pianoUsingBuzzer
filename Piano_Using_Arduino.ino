void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
}
void loop()
{
  noTone (3);
  if (digitalRead(4)==HIGH) {
    tone (3,261);
    delay(100);
  }
  if (digitalRead(5)==HIGH) {
    tone (3,293);
    delay(100);
  }
  if (digitalRead(6)==HIGH) {
    tone (3,329);
    delay(100);
  }
  if (digitalRead(7)==HIGH) {
    tone (3,349);
    delay(100);
  }
  if (digitalRead(8)==HIGH) {
    tone (3,391);
    delay(100); 
  }
  if (digitalRead(9)==HIGH) {
    tone (3,440);
    delay(100);
  }
  if (digitalRead(10)==HIGH) {
    tone (3,493);
    delay(100);
  }
}
  
  
  
