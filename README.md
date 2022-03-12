# ESP32-Bluetooth-selfie-pin
Take pictures on distance with your smartphone.    

You can buy this kind of selfie remote button in Alibaba....  
  
![Pict 1](https://user-images.githubusercontent.com/33222123/158015859-c37b979d-e636-4d80-a7db-e561c37598d7.jpg)  
... but its more fun to make one by self.  

### How to use  
You go to Bluetooth settings in phone and pair it. (it showup as "EPS-selfiepin") You will hear a melody when it connect / disconnect. 
Open camera app and take picture.
It will send "volyme up" button to the phone. That is the button for take pictures in android phones.

  
    
    
### Here is schematic  
It use ESP32 devkit V1 DOIT. If you use another ESP32 board, the pin number can be diffrent.  
  
  
  ![Namnlos](https://user-images.githubusercontent.com/33222123/158015885-59569a44-0a0e-4e0c-8520-064c3d8796e5.png)  

  
### This is the libryray it uses:  
#include <BleKeyboard.h>  
https://github.com/T-vK/ESP32-BLE-Keyboard  


#include <EasyButton.h>  
https://github.com/evert-arias/EasyButton  

#include <melody_player.h>  
#include <melody_factory.h>  
https://github.com/fabianoriccardi/melody-player  
