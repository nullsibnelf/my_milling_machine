folder for arduino codes.


*HC-05_config.ino:*    
This Sketch helps to configure the bluetooth module. You have to change the name, password and baudrate.    
Instruction how to do this can be found here: http://www.instructables.com/id/Modify-The-HC-05-Bluetooth-Module-Defaults-Using-A/



*ESC_test.ino*:    
This Sketch was to test the ESC to run a brushless motor controlled by the arduino. Just for evaluation. Not needed.



*GRBL*:    
My-milling-machine runs with GRBL firmware. It's a open source arduino based software that controlls the whole machine.    
Download: https://github.com/gnea/grbl/releases



*GRBL ESC-patch*:    
My-milling-machine uses a bruschless motor instead of an high revolution cnc spindle. GRBL doesn't support this by now. But there is a fork working, made by https://github.com/pablozg. Thanks for that!     
Download: https://github.com/gnea/grbl/pull/163/commits/012c7ed89ec174e6f918a2663bce6ed2ce5e7117
