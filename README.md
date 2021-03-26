[![MCHP](images/microchip.png)](https://www.microchip.com)

# Getting Started with Universal Synchronous/Asynchronous Receiver/Transmitter (USART)

This repository contains examples of MCC-generated source code for Universal Synchronous/Asynchronous Receiver/Transmitter (USART) as described in [TB3216 - Getting Started with Universal Synchronous and Asynchronous Receiver and Transmitter (USART)](https://ww1.microchip.com/downloads/en/Appnotes/TB3216-Getting-Started-with-USART-DS90003216.pdf) document from Microchip. The repository contains five MPLAB<sup>®</sup> X projects inside:

- [<strong>Send "Hello World!"</strong>](Send_Hello_World): This use case shows how to send the string "Hello World!" (for more details see [<strong>Send "Hello World!"</strong>](Send_Hello_World))
- [<strong>Send Formatted Strings Using Printf</strong>](Send_Formatted_Strings_Using_Printf): Enhances the first use case with the ability to use the `printf` function to send custom formatted strings over USART (for more details see [<strong>Send Formatted Strings Using Printf</strong>](Send_Formatted_Strings_Using_Printf))
- [<strong>Receive Control Commands</strong>](Receive_Control_Commands): This use case shows how to implement a command line interface and receive control commands via the USART (for more details see [<strong>Receive Control Commands</strong>](Receive_Control_Commands))
- [<strong>Synchronous Mode</strong>](Synchronous_Mode): This use case shows how to configure the Synchronous mode for USART (for more details see [<strong>Synchronous Mode</strong>](Synchronous_Mode))
- [<strong>One-Wire Mode</strong>](One_Wire_Mode): This use case shows how to configure the One-Wire mode for USART and send a string (for more details see [<strong>One-Wire Mode</strong>](One_Wire_Mode))

## Related Documentation

More details and code examples on the AVR128DA48 can be found at the following links:

- [TB3216 - Getting Started with Universal Synchronous and Asynchronous Receiver and Transmitter (USART)](https://ww1.microchip.com/downloads/en/Appnotes/TB3216-Getting-Started-with-USART-DS90003216.pdf)
- [AVR128DA48 Product Page](https://www.microchip.com/wwwproducts/en/AVR128DA48)
- [AVR128DA48 Code Examples on GitHub](https://github.com/microchip-pic-avr-examples?q=avr128da48)
- [AVR128DA48 Project Examples in START](https://start.atmel.com/#examples/AVR128DA48CuriosityNano)

## Software Used

- MPLAB<sup>®</sup> X IDE 5.40 or newer [(microchip.com/mplab/mplab-x-ide)](http://www.microchip.com/mplab/mplab-x-ide)
- MPLAB<sup>®</sup> XC8 2.30 or a newer compiler [(microchip.com/mplab/compilers)](http://www.microchip.com/mplab/compilers)
- MPLAB<sup>®</sup> Code Configurator (MCC) 4.0.1 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- MPLAB<sup>®</sup> Code Configurator (MCC) Device Libraries 8-bit AVR MCUs 2.5.0 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- AVR-Dx 1.4.75 or newer Device Pack

## Hardware Used

- AVR128DA48 Curiosity Nano [(DM164151)](https://www.microchip.com/Developmenttools/ProductDetails/DM164151)
