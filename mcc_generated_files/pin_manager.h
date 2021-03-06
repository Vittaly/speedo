/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1575
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set vert_rev aliases
#define vert_rev_TRIS                 TRISAbits.TRISA1
#define vert_rev_LAT                  LATAbits.LATA1
#define vert_rev_PORT                 PORTAbits.RA1
#define vert_rev_WPU                  WPUAbits.WPUA1
#define vert_rev_OD                   ODCONAbits.ODA1
#define vert_rev_ANS                  ANSELAbits.ANSA1
#define vert_rev_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define vert_rev_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define vert_rev_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define vert_rev_GetValue()           PORTAbits.RA1
#define vert_rev_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define vert_rev_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define vert_rev_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define vert_rev_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define vert_rev_SetPushPull()        do { ODCONAbits.ODA1 = 0; } while(0)
#define vert_rev_SetOpenDrain()       do { ODCONAbits.ODA1 = 1; } while(0)
#define vert_rev_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define vert_rev_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set speed_sens aliases
#define speed_sens_TRIS                 TRISAbits.TRISA3
#define speed_sens_PORT                 PORTAbits.RA3
#define speed_sens_WPU                  WPUAbits.WPUA3
#define speed_sens_GetValue()           PORTAbits.RA3
#define speed_sens_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define speed_sens_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define speed_sens_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define speed_sens_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)

// get/set hor_rev aliases
#define hor_rev_TRIS                 TRISAbits.TRISA4
#define hor_rev_LAT                  LATAbits.LATA4
#define hor_rev_PORT                 PORTAbits.RA4
#define hor_rev_WPU                  WPUAbits.WPUA4
#define hor_rev_OD                   ODCONAbits.ODA4
#define hor_rev_ANS                  ANSELAbits.ANSA4
#define hor_rev_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define hor_rev_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define hor_rev_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define hor_rev_GetValue()           PORTAbits.RA4
#define hor_rev_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define hor_rev_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define hor_rev_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define hor_rev_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define hor_rev_SetPushPull()        do { ODCONAbits.ODA4 = 0; } while(0)
#define hor_rev_SetOpenDrain()       do { ODCONAbits.ODA4 = 1; } while(0)
#define hor_rev_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define hor_rev_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF3 pin functionality
 * @Example
    IOCAF3_ISR();
 */
void IOCAF3_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF3 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF3 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF3 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF3_SetInterruptHandler() method.
    This handler is called every time the IOCAF3 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(IOCAF3_InterruptHandler);

*/
extern void (*IOCAF3_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF3 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF3_SetInterruptHandler() method.
    This handler is called every time the IOCAF3 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(IOCAF3_DefaultInterruptHandler);

*/
void IOCAF3_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/