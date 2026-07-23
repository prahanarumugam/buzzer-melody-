# Buzzer Melody

This is a simple Arduino project that uses a passive buzzer to play a musical scale (C4 to C5). 

## Hardware Required

*   Arduino UNO (or similar board)
*   Passive Buzzer
*   Jumper Wires

## Wiring Instructions

1.  Connect the **positive (+)** terminal of the buzzer to Arduino **Digital Pin 8**.
2.  Connect the **negative (-)** terminal of the buzzer to Arduino **GND**.

## How It Works

The code defines frequencies for the notes C4 through C5. In the `setup()` function, it iterates through an array of these notes, using the `tone()` function to play each note for a set duration, followed by a brief gap. The `loop()` function is empty so the melody only plays once upon reset or power-up.
