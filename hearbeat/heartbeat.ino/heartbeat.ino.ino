/*  Outputs number of seconds elapsed every second
 */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("This is heartbeat.ino by Frank Moon 431147");

  pinMode(13, OUTPUT);
}

int time = 0;

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  Serial.print(time);
  Serial.println(" seconds have elapsed");
  time++;

  int count = millis();
  Serial.println(count);
}
