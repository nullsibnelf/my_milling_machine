folder for the files related to the customized arduino CNC-shield
<p>&nbsp;</p>


- It is designed to fit on an Arduino Uno.    
- As stepper drivers I've chosen watterott's TMC2130 board. The board supports 3 Axis: X, Y and Z.    
- For better connectivity I added a HC-05 bluetooth-module. Baudrate stays at 115.200.    
- The shield hat 2 supply inputs: 5V for logic and the Arduino-board, and 12V for the steppers and the ESC/brushless motor.    


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
</table>
        

