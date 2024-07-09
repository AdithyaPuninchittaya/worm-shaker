# MATERIALS AND METHODS 

## Design of Assembly
The habituation device was designed using Fusion 360 as a multi-part file on a PC. As shown in Figure 1, the bottom case houses the Seeed Studio XIAO SAMD21 microcontroller, with an opening for the USB-C combined data and power port. The bottom case has holes so that the entire *C. elegans* plate can be viewed under a bottom-lit stereo zoom microscope. 

![Figure 1: Image showing the bottom case of the habituation device.](#)

The top plate, as shown in Figure 2 below, is designed to simultaneously accommodate three 35 mm bacteriological Petri dishes in a triangular configuration. The top plate also has mounting points for the three vibration motors (Garosa Vibration Motor 11500rpm) placed equidistantly between the Petri dish holders. The motors were placed so that each was tangent to the two adjacent Petri dishes, ensuring an even distribution of vibrational stimuli. 

![Figure 2: Image showing the top plate and the associated wiring harness.](#)

The STL files for the design are found in the GitHub repository linked here: [https://github.com/AdithyaPuninchittaya/worm-shaker](https://github.com/AdithyaPuninchittaya/worm-shaker).

## Fabrication of Assembly  
The STL files were sliced using Bambu Studio and then transferred to the Bambu Lab X1C printer, where the models were printed using Bambu PLA Basic filament. Once printing was completed, the printed parts were carefully removed from the print bed. Support materials were removed for smooth assembly. Heated inserts were installed in the designated holes for mounting components. The inserts were heated using a soldering iron and then pressed into the holes to create strong and threaded connections for screws.

A wiring harness was created to connect the vibration motors to the Seeed Studio XIAO SAMD21 microcontroller, as shown, using spare jumper wires. Wires from the motors were then routed against the device frame and hot-glued in place to the top plate. The wiring diagram is shown below in Figure 3. 

![Figure 3: Image showing the wiring diagram for the wiring harness.](#)

## Programming
The Arduino Integrated Development Environment (IDE) was installed on a computer. The necessary library for the Seeed Studio XIAO SAMD21 was installed. The microcontroller was connected to the laptop via USB-C, and the board settings in the Arduino IDE were configured to match the analog port of the Seeed Studio XIAO SAMD21. A custom program was written to control the vibration sequence. The program included variables for vibration duration, intensity, and inter-stimulus interval. The program's main loop sends signals to the analog port, which activates the motors according to the specified parameters. The code can be found below in Figure 4 and in the GitHub repository linked here: [https://github.com/AdithyaPuninchittaya/worm-shaker](https://github.com/AdithyaPuninchittaya/worm-shaker). The program and vibration cycle runs when the device is powered via a USB-C cable. 

![Figure 4: Image showing example code that the microcontroller runs and a diagram of its cycle.](#)

## Bill of Materials

| Item Name | Link | Unit Cost ($) | Quantity | Total Cost ($) |
|-----------|------|---------------|----------|----------------|
| M3 Screws 10mm (100 pack of screws) | Amazon | 0.062 | 3 | 0.186 |
| Optional Rubber Washers (for dampening between plates) | Amazon | 0.3 | 3 | 0.9 |
| Heatset Inserts | Amazon | 0.07575 | 3 | 0.22725 |
| XIAO SAMD21 | Amazon | 8.33 | 1 | 8.33 |
| Male to Male Jumper Wires | Amazon | 0.999 | 5 | 4.995 |
| Vibration Motors | Amazon | 2.094 | 3 | 6.282 |
| Top Plate (STL File) | - | 0.60 | 1 | 0.60 |
| Bottom Case (STL File) | - | 1.07 | 1 | 1.07 |
| **Total Cost** | | | | **22.60** |

# RESULTS

![Figure 5: Final design and assembly of the habituation device, housing three 35 mm *C. elegans* plates](#)

![Figure 6: Image of habituation device on microscope setup for recording.](#)
