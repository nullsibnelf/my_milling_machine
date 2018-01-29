folder for cad-files and the software Eagle from CADSoft.

<br>
<i>Eagle:</i>

All pcb-cad-files are made with Eagle.    
Download: http://ftp.cadsoft.de/freeware.htm
<p>&nbsp;<br></p>


<br>
<i>ULP Script pcb-gcode:</i>

To make gcode out of your board-file you need this ULP-script.    
Download: http://pcbgcode.org/list.php?12   
   
   
Changes: in file "settings/gcode-defaults.h" line 49 change    
```string SPINDLE_ON = "M03" + EOL + DWELL;```    
into    
```string SPINDLE_ON = "M03 S20" + EOL + DWELL;```    
