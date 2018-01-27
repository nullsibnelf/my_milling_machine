folder for the files related to the customized arduino CNC-shield
<p>&nbsp;</p>


- It is designed to fit on an Arduino Uno.    
- As stepper drivers I've chosen watterott's TMC2130 board. The board supports 3 Axis: X, Y and Z.    
- For better connectivity I added a HC-05 bluetooth-module. Baudrate stays at 115.200.    
- To avoid trouble while flashing (because of the HC-05 is parallel), the bluetooth module is powered by an Arduino-Port.
- The shield has 2 supply inputs: 5V for logic and the Arduino-board, and 12V for the steppers and the ESC/brushless motor.    
<p>&nbsp;</p>


<img src="schematic.png">
<p>&nbsp;</p>


<img src="layout.png">
<p>&nbsp;</p>


<table>
    <tr>
        <td> new </td>
        <td> grbl </td>
        <td> pin </td>
        <td> port </td>
        <td> &nbsp </td>
        <td> port </td>
        <td> pin </td>
        <td> grbl </td>
        <td> new </td>
    </tr>
    <tr></tr>
    <tr>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> SCL </td>
        <td>   </td>
        <td>   </td>
    </tr>
    <tr>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> SDA </td>
        <td>   </td>
        <td>   </td>
    </tr>
    <tr>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> AREF </td>
        <td>   </td>
        <td>   </td>
    </tr>
    <tr>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> GND </td>
        <td>   </td>
        <td>   </td>
    </tr>
    <tr>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_13 </td>
        <td> Spindle direction  </td>
        <td>   </td>
    </tr>
    <tr>
        <td> 5V </td>
        <td> 5V </td>
        <td> 5V </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_12 </td>
        <td> Limit Z </td>
        <td> Limit switch Z </td>
    </tr>
    <tr>
        <td>  </td>
        <td>  </td>
        <td> Reset </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_11 </td>
        <td> Variable Spindle PWM </td>
        <td> ESC PWM </td>
    </tr>
    <tr>
        <td>  </td>
        <td>  </td>
        <td> 3V3 </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_10 </td>
        <td> Limit Y </td>
        <td> Limit switch Y </td>
    </tr>
    <tr>
        <td>  </td>
        <td>  </td>
        <td> 5V </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_09 </td>
        <td> Limit X </td>
        <td> Limit switch X </td>
    </tr>
    <tr>
        <td>  </td>
        <td>  </td>
        <td> GND </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_08 </td>
        <td> Stepper enable </td>
        <td> Bluetooth module 5V </td>
    </tr>
    <tr>
        <td>  </td>
        <td>  </td>
        <td> GND </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td>  </td>
        <td>  </td>
        <td>  </td>
    </tr>
    <tr>
        <td>  </td>
        <td> VIN </td>
        <td>  </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_07 </td>
        <td> Z Direction </td>
        <td> Z Direction </td>
    </tr>
    <tr>
        <td>  </td>
        <td>  </td>
        <td>  </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_06 </td>
        <td> Y Direction </td>
        <td> Z Step </td>
    </tr>
    <tr>
        <td>  </td>
        <td> Reset / Abort </td>
        <td> Analog_0 </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_05 </td>
        <td> X Direction </td>
        <td> Y Direction </td>
    </tr>
    <tr>
        <td>  </td>
        <td> Feed Hold </td>
        <td> Analog_1 </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_04 </td>
        <td> Z Step </td>
        <td> Y Step </td>
    </tr>
    <tr>
        <td>  </td>
        <td> Cycle Start / Resume </td>
        <td> Analog_2 </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_03 </td>
        <td> Y Step </td>
        <td> X Direction </td>
    </tr>
    <tr>
        <td>  </td>
        <td> Coolant Enable </td>
        <td> Analog_3 </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> Dig_02 </td>
        <td> X Step </td>
        <td> X Step </td>
    </tr>
    <tr>
        <td>  </td>
        <td> reserved </td>
        <td> Analog_4 </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> TxD </td>
        <td>  </td>
        <td> Bluetooth module Rx </td>
    </tr>
    <tr>
        <td>  </td>
        <td> Probe </td>
        <td> Analog_5 </td>
        <td>   </td>
        <td>   </td>
        <td>   </td>
        <td> RxD </td>
        <td>  </td>
        <td> Bluetooth module Tx </td>
    </tr>
</table>
<p>&nbsp;</p>


Further changes:<br>
- dust absorbtion
- ws2812 for printhead lightning
- Z probing
- emergency shutoff
- endstop via stall-detection within TMC2130


