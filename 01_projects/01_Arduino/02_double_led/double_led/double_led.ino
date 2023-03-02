void setup() {
  // put your setup code here, to run once:

}

void loop() {
  for(int i = 0, j = 128; i < 129; i++,j--)
  {
    analogWrite(11,i);
    analogWrite(10,j);

    delay(10);
  }
  for(int i = 0, j = 128; i < 129; i++,j--)
  {
    analogWrite(11,j);
    analogWrite(10,i);

    delay(10);
  }
}
