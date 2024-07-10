# MATERIALS AND METHODS 

## Design of Assembly
The habituation device was designed using Fusion 360 as a multi-part file on a PC. As shown in Figure 1, the bottom case houses the Seeed Studio XIAO SAMD21 microcontroller, with an opening for the USB-C combined data and power port. The bottom case has holes so that the entire *C. elegans* plate can be viewed under a bottom-lit stereo zoom microscope. 

| ![Figure 1: Image showing the bottom case of the habituation device.](https://github.com/AdithyaPuninchittaya/worm-shaker/blob/main/Images/unnamed%20(1).jpg) |
|:--:| 
| *Figure 1: Image showing the bottom case of the habituation device.* |

The top plate, as shown in Figure 2 below, is designed to simultaneously accommodate three 35 mm bacteriological Petri dishes in a triangular configuration. The top plate also has mounting points for the three vibration motors (Garosa Vibration Motor 11500rpm) placed equidistantly between the Petri dish holders. The motors were placed so that each was tangent to the two adjacent Petri dishes, ensuring an even distribution of vibrational stimuli. 

| ![Figure 2: Image showing the top plate and the associated wiring harness.](https://github.com/AdithyaPuninchittaya/worm-shaker/blob/main/Images/unnamed%20(2).jpg) |
|:--:| 
| *Figure 2: Image showing the top plate and the associated wiring harness.* |


The STL files for the design are found in the GitHub repository linked here: [https://github.com/AdithyaPuninchittaya/worm-shaker](https://github.com/AdithyaPuninchittaya/worm-shaker).

## Fabrication of Assembly  
The STL files were sliced using Bambu Studio and then transferred to the Bambu Lab X1C printer, where the models were printed using Bambu PLA Basic filament. Once printing was completed, the printed parts were carefully removed from the print bed. Support materials were removed for smooth assembly. Heated inserts were installed in the designated holes for mounting components. The inserts were heated using a soldering iron and then pressed into the holes to create strong and threaded connections for screws.

A wiring harness was created to connect the vibration motors to the Seeed Studio XIAO SAMD21 microcontroller, as shown, using spare jumper wires. Wires from the motors were then routed against the device frame and hot-glued in place to the top plate. The wiring diagram is shown below in Figure 3. 

| ![Figure 3: Image showing the wiring diagram for the wiring harness.](https://github.com/AdithyaPuninchittaya/worm-shaker/blob/main/Images/unnamed.png) |
|:--:| 
| *Figure 3: Image showing the wiring diagram for the wiring harness. * |

## Programming
The Arduino Integrated Development Environment (IDE) was installed on a computer. The necessary library for the Seeed Studio XIAO SAMD21 was installed. The microcontroller was connected to the laptop via USB-C, and the board settings in the Arduino IDE were configured to match the analog port of the Seeed Studio XIAO SAMD21. A custom program was written to control the vibration sequence. The program included variables for vibration duration, intensity, and inter-stimulus interval. The program's main loop sends signals to the analog port, which activates the motors according to the specified parameters. The code can be found below in Figure 4 and in the GitHub repository linked here: [https://github.com/AdithyaPuninchittaya/worm-shaker/wormshaker.ino](https://github.com/AdithyaPuninchittaya/worm-shaker/wormshaker.ino). The program and vibration cycle runs when the device is powered via a USB-C cable. 

| ![Figure 4: Image showing example code that the microcontroller runs and a diagram of its cycle.](https://github.com/AdithyaPuninchittaya/worm-shaker/blob/main/Images/Novel%20Design%20and%20Evaluation%20of%20C.%20elegans%20Habituation%20Device.jpg) |
|:--:| 
| *Figure 4: Image showing example code that the microcontroller runs and a diagram of its cycle.* |


## Bill of Materials

| Item Name | Link | Unit Cost ($) | Quantity | Total Cost ($) |
|-----------|------|---------------|----------|----------------|
| M3 Screws 10mm (100 pack of screws) | [Amazon](http://amazon.com/Mxfans-100pcs-Carbon-Countersunk-Socket/dp/B07DWVDDWC) | 0.062 | 3 | 0.186 |
| Optional Rubber Washers (for dampening between plates) | [Amazon](http://www.amazon.com/uxcell-Gasket-Rubber-Washer-Grommet/dp/B01MTDD2R9) | 0.3 | 3 | 0.9 |
| Heatset Inserts | [Amazon](http://amazon.com/uxcell-Knurled-Insert-Female-Embedding) | 0.07575 | 3 | 0.22725 |
| XIAO SAMD21 | [Amazon](https://www.amazon.com/Seeeduino-Smallest-Microcontroller-Interfaces-Compatible/dp/B08745JBRP) | 8.33 | 1 | 8.33 |
| Male to Male Jumper Wires | [Amazon](https://www.amazon.com/Seeeduino-Smallest-Microcontroller-Interfaces-Compatible/dp/B08745JBRP) | 0.999 | 5 | 4.995 |
| Vibration Motors | [Amazon](https://www.amazon.com/11500rpm-Vibration-Vibrating-Detection-Equipment/dp/B087XCFCLL) | 2.094 | 3 | 6.282 |
| Top Plate (STL File) | [Print File](https://github.com/AdithyaPuninchittaya/worm-shaker/blob/main/Print%20Files/Top%20Plate.stl) | 0.60 | 1 | 0.60 |
| Bottom Case (STL File) | [Print File](https://github.com/AdithyaPuninchittaya/worm-shaker/blob/main/Print%20Files/Bottom%20Case.stl) | 1.07 | 1 | 1.07 |
| **Total Cost** | | | | **22.60** |

# RESULTS

| ![Figure 5: Final design and assembly of the habituation device, housing three 35 mm *C. elegans* plates](https://github.com/AdithyaPuninchittaya/worm-shaker/blob/main/Images/IMG_9063.jpg) |
|:--:| 
| *Figure 5: Final design and assembly of the habituation device, housing three 35 mm C. elegans plates * |



| ![Figure 6: Image of habituation device on microscope setup for recording.](https://github.com/AdithyaPuninchittaya/worm-shaker/blob/main/Images/IMG_9064.jpg) |
|:--:| 
| *Figure 6: Image of habituation device on microscope setup for recording.* |

