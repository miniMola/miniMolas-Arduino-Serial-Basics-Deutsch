//Dieser Text wurde geschrieben von miniMola / Adriano - Wenn sie es verändern möchten können sie es NICHT-kommerziel durchführen, andernfalls mich kontaktieren
//Dies ist ein Sketch, das die Basics über Serial beinhaltet

#define ledPin 13     //Definiert 'ledPin' als PIN Nr. 13
int incomingByte;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);     //Legt fest, das ledPin ein Ausgang ist und Strom ausgibt
  Serial.println(" ");      //Mit Serial.println(" ") kann eine Textzeile in der Seriellen Schnittstelle ausgegeben werden
  Serial.println("[Serial-Basics] Arduino ist gestartet.");
  Serial.println(" 0 = LED Ausschalten ");
  Serial.println(" 1 = LED Einschalten ");
  Serial.println(" 4 = Hilfe");
  Serial.println(" 5 = Serielle Konsole 'leeren' ");
  Serial.println(" 9 = Arduino Resetten ");
}

void loop() {
  if (Serial.available() > 0) {

    incomingByte = Serial.read();

    if (incomingByte == '1')      //Falls die Zahl 1 ankommt, wird folgendes ausgeführt:
    {
      digitalWrite(ledPin, HIGH);     //Schaltet ledPin Ein
      Serial.println("PIN 13 ist eingeschaltet!");
    }

    if (incomingByte == '0')      //Falls die Zahl 0 ankommt, wird folgendes ausgeführt:
    {
      digitalWrite(ledPin, LOW);     //Schaltet ledPin Aus
      Serial.println("PIN 13 ist ausgeschaltet!");
    }
    
    if (incomingByte == '4')      //Falls die Zahl 4 ankommt, wird folgendes ausgeführt:
    {
      Serial.println(" ");
      Serial.println(" 0 = LED Ausschalten ");
      Serial.println(" 1 = LED Einschalten ");
      Serial.println(" 4 = Hilfe");
      Serial.println(" 5 = Serielle Konsole 'leeren' ");
      Serial.println(" 9 = Arduino Resetten ");
    }

    if (incomingByte == '5')      //Falls die Zahl 5 ankommt, wird folgendes ausgeführt:
    {
      //Der Befehl 5 leert sozusagen die Serielle Konsole
      digitalWrite(ledPin, LOW);     //Schaltet ledPin Aus
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
    }
    
    if (incomingByte == '9')      //Falls die Zahl 9 ankommt, wird der Arduino Resettet:
    {
      Serial.println("Copyright (c) miniMola eMedia - ALLE RECHTE VORBEHALTEN");
      Serial.println("      ");
      Serial.println("      GERÄT WIRD RESETTET");
      Serial.println("      ");
      delay(300);
      Serial.println("      AUSGEFÜHRT: asm volatile (''  jmp 0'');");
      Serial.println("            ASSEMBLERBEFEHL WIRD AUSGEFÜHRT:   jmp 0");
      delay(300);
      Serial.println("      GERÄT RESETTET");
      Serial.println("      ");
      asm volatile ("  jmp 0");
    }
  }
}
