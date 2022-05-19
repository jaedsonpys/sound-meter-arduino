const int soundSensorPin = A0;

// leds pin
const int oneBluePin = 8;
const int twoBluePin = 9;
const int oneYellowPin = 10;
const int twoYellowPin = 13;
const int oneRedPin = 11;
const int twoRedPin = 12;

void setup() {
  // pinMode of leds
  for(int i = 8; i < 13; i++) {
    pinMode(i, OUTPUT);
  }

  pinMode(soundSensorPin, INPUT);
}

void loop() {

}
