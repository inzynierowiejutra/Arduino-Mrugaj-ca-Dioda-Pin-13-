#include <Arduino.h>

/**
 * Program sterujący miganiem diody LED.
 * Dioda miga w cyklu: 0,5 sekundy włączona, 1 sekundę wyłączona.
 */

// Stałe
constexpr int LED_PIN = 13;
constexpr int SHORT_DELAY = 500; // Czas włączenia diody na 500 ms, czyli pół sekundy
constexpr int LONG_DELAY = 1000; // Czas wyłączenia diody na 1000 ms, czyli jedną sekundę

// Deklaracje funkcji
inline void blinkLED();

void setup() {
  pinMode(LED_PIN, OUTPUT); // Konfiguracja pinu jako wyjście
}

void loop() {
  blinkLED(); 
}

/**
 * Funkcja migająca diodą LED.
 * Włącza diodę na określony czas, a następnie ją wyłącza.
 */
inline void blinkLED() {
  digitalWrite(LED_PIN, HIGH); // Włącz diodę
  delay(SHORT_DELAY);          // Poczekaj 500 ms
  digitalWrite(LED_PIN, LOW);  // Wyłącz diodę
  delay(LONG_DELAY);           // Poczekaj 1000 ms
}