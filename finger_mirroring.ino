#include <Servo.h>

const int SENSOR_PIN = A1;   // Replace with the actual pin of your analog sensor
const int SERVO_PIN = 3;     // Replace with the actual pin of your servo
const int DEGREE_OFFSET = 20; // Tune to ensure servo defaults to completely open finger

const int NUM_SAMPLES = 5;
int sensorValues[NUM_SAMPLES];
int currentIndex = 0;

Servo myServo;

void setup() {
  Serial.begin(9600);
  myServo.attach(SERVO_PIN);
}

void loop() {
  // Read analog sensor value
  int sensorValue = analogRead(SENSOR_PIN);

  // Update the moving average array
  updateMovingAverage(sensorValue);

  // Calculate the average value
  int averageValue = calculateAverage();

  // Map the average value to a different range (adjust the values as needed)
  int mappedValue = map(averageValue, 0, 40, 0, 180);

  // Write the mapped value to the servo
  myServo.write(constrain(mappedValue + DEGREE_OFFSET, 0, 110));

  // Print the values for debugging (optional)
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print(", Average Value: ");
  Serial.print(averageValue);
  Serial.print(", Mapped Value: ");
  Serial.println(mappedValue);

  delay(100);  // Adjust the delay as needed
}

void updateMovingAverage(int newValue) {
  sensorValues[currentIndex] = newValue;
  currentIndex = (currentIndex + 1) % NUM_SAMPLES;
}

int calculateAverage() {
  int sum = 0;
  for (int i = 0; i < NUM_SAMPLES; i++) {
    sum += sensorValues[i];
  }
  return sum / NUM_SAMPLES;
}
