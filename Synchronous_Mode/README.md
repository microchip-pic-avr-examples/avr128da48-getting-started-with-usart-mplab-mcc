<!-- Please do not change this logo with link -->

[![MCHP](../images/microchip.png)](https://www.microchip.com)

# Synchronous Mode

This project shows how to configure the USART peripheral in Synchronous mode and send characters from one instance to another repeatedly. USART0 sends 'A' and USART1 sends 'B'.

## Related Documentation

More details and code examples on the AVR128DA48 can be found at the following links:

- [TB3216-Getting Started with Universal Synchronous/Asynchronours Receiver/Transmitter (USART)](https://www.microchip.com/)
- [AVR128DA48 Product Page](https://www.microchip.com/wwwproducts/en/AVR128DA28)
- [AVR128DA48 Code Examples on GitHub](https://github.com/microchip-pic-avr-examples?q=avr128da48)
- [AVR128DA48 Project Examples in START](https://start.atmel.com/#examples/AVR128DA48CuriosityNano)

## Software Used

- MPLAB® X IDE 5.40 or newer [(microchip.com/mplab/mplab-x-ide)](http://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® XC8 2.30 or a newer compiler [(microchip.com/mplab/compilers)](http://www.microchip.com/mplab/compilers)
- MPLAB® Code Configurator (MCC) 4.0.1 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- MPLAB® Code Configurator (MCC) Device Libraries 8-bit AVR MCUs 2.5.0 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- AVR-Dx 1.4.75 or newer Device Pack

## Hardware Used

- AVR128DA48 Curiosity Nano [(DM164151)](https://www.microchip.com/Developmenttools/ProductDetails/DM164151)

## Setup

The AVR128DA48 Curiosity Nano Development Board is used as test platform.

<br><img src="../images/AVR128DA48_CNANO_instructions.png" width="500">

The following configurations must be made for this project:

System clock: 3.33 MHz

USART0 is configured with 9600 baud 8N1, in Synchronous mode.

USART1 is configured with 9600 baud 8N1, in Synchronous mode.
 

|    Pin    | Configuration  |
| :-------: | :------------: |
| USART1    | Host           |
| PC0 (TX)  | Digital output |
| PC1 (RX)  | Digital input  |
| PC2 (XCK) | Digital output |
| PC3 (XDIR)| Input          |
| :-------: | :------------: |
| USART0    | Client         |
| PA0 (TX)  | Digital output |
| PA1 (RX)  | Digital input  |
| PA2 (XCK) | Digital input  |
| PA3 (XDIR)| Input          |
  

## Operation

1.  Connect the board to the PC.

2.  Open the Synchronous_Mode.X project in MPLAB X.

3.  Set the Synchronous_Mode.X project as main project. Right click the project in the **Projects** tab and click **Set as Main Project**.

<br><img src="../images/setmain.PNG" height="500">

4.  Clean and build the Synchronous_Mode.X project: right click the **Synchronous_Mode.X** project and select **Clean and Build**.

<br><img src="../images/cleanbuild.PNG"  height="500">

5.  Select **AVR128DA48 Curiosity Nano** in the Connected Hardware Tool section of the project settings:

- Right click the project and click **Properties**;
- Click the arrow right next to Connected Hardware Tool;
- Select **AVR128DA48 Curiosity Nano** (click on the **SN**), click **Apply** and then click **OK**:

<br><img src="../images/device.PNG" height="500">

6.  Program the project to the board: right click the project and click **Make and Program Device**.

<br><img src="../images/makeprog.PNG" height="500">

Demo:

For testing the example, two breakpoints set in the two ISRs are required. Each breakpoint will be triggered in the code.
When one USART instance sends a character, the other receives it and enters its corresponding ISR. The same thing happens when the other instance transmits. 
Checking the two ISRs with breakpoints (which means that the code reaches them) implies that both the transmit function of the USART instance works as well as the receive function of the other USART instance.
<br><img src="images/RX0.PNG" height="300">
<br><img src="images/RX1.PNG" height="300">

## Summary

This project shows how to configure the USART peripheral to send data in Synchronous Mode.
