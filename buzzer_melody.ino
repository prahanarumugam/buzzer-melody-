/*
  Arduino Buzzer Melody Project
  -----------------------------
  This project uses a passive buzzer to play a simple musical scale.

  Wiring:
  Buzzer positive (+)  -> Arduino Digital Pin 8
  Buzzer negative (-)  -> Arduino GND

  Board:
  Works with Arduino UNO and similar boards.
*/

// The pin where the buzzer is connected
const int buzzerPin = 8;

// Frequencies of musical notes in Hertz
const int NOTE_C4 = 262;  // Do
const int NOTE_D4 = 294;  // Re
const int NOTE_E4 = 330;  // Mi
const int NOTE_F4 = 349;  // Fa
const int NOTE_G4 = 392;  // Sol
const int NOTE_A4 = 440;  // La
const int NOTE_B4 = 494;  // Ti
const int NOTE_C5 = 523;  // High Do

// Store all the notes of the melody
int melody[] = {
  NOTE_C4,
  NOTE_D4,
  NOTE_E4,
  NOTE_F4,
  NOTE_G4,
  NOTE_A4,
  NOTE_B4,
  NOTE_C5
};

// Number of notes inside the melody
const int totalNotes = sizeof(melody) / sizeof(melody[0]);

// How long each note plays
const int noteDuration = 300;

// Pause between each note
const int noteGap = 100;

void setup() {

  // Play every note one by one
  for (int i = 0; i < totalNotes; i++) {

    // Play the current frequency on the buzzer
    tone(buzzerPin, melody[i], noteDuration);

    // Wait until the note finishes
    delay(noteDuration + noteGap);
  }

  // Make sure the buzzer stops
  noTone(buzzerPin);
}

void loop() {
  // Nothing is placed here because
  // the melody should only play once
  // when the Arduino is powered on or reset.
}
