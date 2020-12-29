/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include <avr/io.h>
#include <stdio.h>
#include <string.h>
#include "mcc_generated_files/mcc.h"

#define MAX_COMMAND_LEN 8

void executeCommand(char *command);
void USART1_sendString(const char *str);

void executeCommand(char *command)
{
    if(strcmp(command, "ON") == 0)
    {
        LED_SetLow();
        USART1_sendString("OK, LED ON.\r\n");
    }
    else if (strcmp(command, "OFF") == 0)
    {
        LED_SetHigh();
        USART1_sendString("OK, LED OFF.\r\n");
    } 
    else 
    {
        USART1_sendString("Type ON/OFF to control the LED.\r\n");
    }
}


void USART1_sendString(const char *str)
{
    for(size_t i = 0; i < strlen(str); i++)
    {
        USART1_Write(str[i]);
    }
}

/*
    Main application
*/
int main(void)
{
    char command[MAX_COMMAND_LEN];
    uint8_t index = 0;
    uint8_t c;
    
    /* Initializes MCU, drivers and middleware */
    SYSTEM_Initialize();

    /* Replace with your application code */
    USART1_sendString("Type ON/OFF to control the LED.\r\n");

    while (1)
    {
        c = USART1_Read();
        if(c != '\n' && c != '\r')
        {
            command[index++] = c;
            if(index > MAX_COMMAND_LEN)
            {
                index = 0;
            }
        }
        
        if(c == '\n')
        {
            command[index] = '\0';
            index = 0;
            executeCommand(command);
        }        
    }
}
/**
    End of File
*/