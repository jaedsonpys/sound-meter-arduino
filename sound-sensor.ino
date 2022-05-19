const int soundSensorPin = A0;

// leds pin
const int oneBluePin = 8;
const int twoBluePin = 9;
const int oneYellowPin = 10;
const int twoYellowPin = 13;
const int oneRedPin = 11;
const int twoRedPin = 12;

// sound levels
const int low = 120;
const int medium = 170;
const int high = 220;

const int levelDiff = 60;

void setup() {
  // pinMode of leds
  for(int i = 8; i < 13; i++) {
    pinMode(i, OUTPUT);
  }

  pinMode(soundSensorPin, INPUT);
}

void loop() {
  const int sound = analogRead(soundSensorPin);

  // low sound
  if(sound >= low - levelDiff) {
    digitalWrite(oneBluePin, HIGH);
  } else {
    digitalWrite(oneBluePin, LOW);
  }

  if(sound >= low) {
    digitalWrite(twoBluePin, HIGH);
  } else {
    digitalWrite(twoBluePin, LOW);
  }

  // medium sound
  if(sound >= medium - levelDiff) {
    digitalWrite(oneYellowPin, HIGH);
  } else {
    digitalWrite(oneYellowPin, LOW);
  }

  if(sound >= medium) {
    digitalWrite(twoYellowPin, HIGH);
  } else {
    digitalWrite(twoYellowPin, LOW);
  }

  // high sound
  if(sound >= high - levelDiff) {
    digitalWrite(oneRedPin, HIGH);
  } else {
    digitalWrite(oneRedPin, LOW);
  }

  if(sound >= high) {
    digitalWrite(twoRedPin, HIGH);
  } else {
    digitalWrite(twoRedPin, LOW);
  }

  delay(50);
}
