#include <BleKeyboard.h>

#include <EasyButton.h>

#include <melody_player.h>
#include <melody_factory.h>
int buzzerPin = 4;
MelodyPlayer player(buzzerPin, HIGH);
String notes1[] = { "C5", "D5", "E5", "F5", "G5" };
String notes2[] = { "G5", "F5", "E5", "D5", "C5" };
Melody melody1 = MelodyFactory.load("Nice Melody", 80, notes1, 5);
Melody melody2 = MelodyFactory.load("Nice Melody", 80, notes2, 5);


EasyButton button(0);
// this one works......++++++++jh

BleKeyboard bleKeyboard("EPS-selfiepin", "jhab", 80);

int x = 0;
void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");

  bleKeyboard.begin();
  button.begin();
  button.onPressed(onPressed);
}

void loop() {
  if (bleKeyboard.isConnected()) {
    if (x == 0) {// play one time only
      x = 1;
      Serial.println("conected");
      player.playAsync(melody1);
    }
  }
  else {
    if (x == 1) {// play one time only
      x = 0;
      Serial.println("disconected");
      player.playAsync(melody2);
    }
  }
//*******************************

  button.read();
  delay(1);
}


void onPressed() {
  if (bleKeyboard.isConnected()) {
    Serial.println("klick");
    bleKeyboard.write(KEY_MEDIA_VOLUME_UP);
  }
}
