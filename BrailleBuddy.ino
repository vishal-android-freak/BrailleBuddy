#include <Arduino.h>

//Initialize Servo and Software Serial library
#include<Servo.h>
#include<SoftwareSerial.h>

//Initialize servo objects
Servo servoOne, servoTwo, servoThree, servoFour, servoFive, servoSix;

//Initialize Software Serial for Bluetooth HC-05
SoftwareSerial bluetoothSerial(2, 3);

//Initialize text variables used for braille conversion
String output;
char letter;

void setup() {

  //Start bluetooth serial
  bluetoothSerial.begin(9600);

  //Attach the servo motors to 5,7,8,9,10,11 digital pins of Arduino UNO
  servoOne.attach(5);
  servoOne.write(0);

  servoTwo.attach(7);
  servoTwo.write(0);

  servoThree.attach(8);
  servoThree.write(0);

  servoFour.attach(9);
  servoFour.write(0);

  servoFive.attach(10);
  servoFive.write(0);

  servoSix.attach(11);
  servoSix.write(0);
}

void loop() {
  
  //Get text from Android Device via bluetooth
  output = bluetoothSerial.readString();
  output.trim();
  output.toLowerCase();

  //Iterate through all the alphabets in the received string, one by one
  for (int i = 0; i < output.length(); i++) {

    letter = output.charAt(i);

    //Check for the letter and obtain it's Braille conversion
    switch (letter) {

      case 'a':
        servoOne.write(90);
        servoTwo.write(0);
        servoThree.write(0);
        servoFour.write(0);
        servoFive.write(0);
        servoSix.write(0);
        break;

      case 'b':
        servoOne.write(90);
        servoTwo.write(0);
        servoThree.write(90);
        servoFour.write(0);
        servoFive.write(0);
        servoSix.write(0);
        break;

      case 'c':
        servoOne.write(90);
        servoTwo.write(90);
        servoThree.write(0);
        servoFour.write(0);
        servoFive.write(0);
        servoSix.write(0);
        break;

        case 'd':
        servoOne.write(90);
        servoTwo.write(90);
        servoThree.write(0);
        servoFour.write(90);
        servoFive.write(0);
        servoSix.write(0);
        break;

        case 'e':
        servoOne.write(90);
        servoTwo.write(0);
        servoThree.write(0);
        servoFour.write(90);
        servoFive.write(0);
        servoSix.write(0);
        break;

        case 'f':
        servoOne.write(90);
        servoTwo.write(90);
        servoThree.write(90);
        servoFour.write(0);
        servoFive.write(0);
        servoSix.write(0);
        break;

        case 'g':
        servoOne.write(90);
        servoTwo.write(90);
        servoThree.write(90);
        servoFour.write(90);
        servoFive.write(0);
        servoSix.write(0);
        break;

        case 'h':
        servoOne.write(90);
        servoTwo.write(0);
        servoThree.write(90);
        servoFour.write(90);
        servoFive.write(0);
        servoSix.write(0);
        break;

        case 'i':
        servoOne.write(0);
        servoTwo.write(90);
        servoThree.write(90);
        servoFour.write(0);
        servoFive.write(0);
        servoSix.write(0);
        break;

        case 'j':
        servoOne.write(0);
        servoTwo.write(90);
        servoThree.write(90);
        servoFour.write(90);
        servoFive.write(0);
        servoSix.write(0);
        break;

        case 'k':
        servoOne.write(90);
        servoTwo.write(0);
        servoThree.write(0);
        servoFour.write(0);
        servoFive.write(90);
        servoSix.write(0);
        break;

        case 'l':
        servoOne.write(90);
        servoTwo.write(0);
        servoThree.write(90);
        servoFour.write(0);
        servoFive.write(90);
        servoSix.write(0);
        break;

        case 'm':
        servoOne.write(90);
        servoTwo.write(90);
        servoThree.write(0);
        servoFour.write(0);
        servoFive.write(90);
        servoSix.write(0);
        break;

        case 'n':
        servoOne.write(90);
        servoTwo.write(90);
        servoThree.write(0);
        servoFour.write(90);
        servoFive.write(90);
        servoSix.write(0);
        break;

        case 'o':
        servoOne.write(90);
        servoTwo.write(0);
        servoThree.write(0);
        servoFour.write(90);
        servoFive.write(90);
        servoSix.write(0);
        break;

        case 'p':
        servoOne.write(90);
        servoTwo.write(90);
        servoThree.write(90);
        servoFour.write(0);
        servoFive.write(90);
        servoSix.write(0);
        break;

        case 'q':
        servoOne.write(90);
        servoTwo.write(90);
        servoThree.write(90);
        servoFour.write(90);
        servoFive.write(90);
        servoSix.write(0);
        break;

        case 'r':
        servoOne.write(90);
        servoTwo.write(0);
        servoThree.write(90);
        servoFour.write(90);
        servoFive.write(90);
        servoSix.write(0);
        break;

        case 's':
        servoOne.write(0);
        servoTwo.write(90);
        servoThree.write(90);
        servoFour.write(0);
        servoFive.write(90);
        servoSix.write(0);
        break;

        case 't':
        servoOne.write(0);
        servoTwo.write(90);
        servoThree.write(90);
        servoFour.write(90);
        servoFive.write(90);
        servoSix.write(0);
        break;

        case 'u':
        servoOne.write(90);
        servoTwo.write(0);
        servoThree.write(0);
        servoFour.write(90);
        servoFive.write(90);
        servoSix.write(0);
        break;

        case 'v':
        servoOne.write(90);
        servoTwo.write(0);
        servoThree.write(90);
        servoFour.write(0);
        servoFive.write(90);
        servoSix.write(90);
        break;

        case 'w':
        servoOne.write(0);
        servoTwo.write(90);
        servoThree.write(90);
        servoFour.write(90);
        servoFive.write(0);
        servoSix.write(90);
        break;

        case 'x':
        servoOne.write(90);
        servoTwo.write(90);
        servoThree.write(0);
        servoFour.write(0);
        servoFive.write(90);
        servoSix.write(90);
        break;

        case 'y':
        servoOne.write(90);
        servoTwo.write(90);
        servoThree.write(0);
        servoFour.write(90);
        servoFive.write(90);
        servoSix.write(90);
        break;

        case 'z':
        servoOne.write(90);
        servoTwo.write(0);
        servoThree.write(0);
        servoFour.write(90);
        servoFive.write(90);
        servoSix.write(90);
        break;
    }
    //Give some time for the servo motors to rotate
    delay(1000);
  }
}
