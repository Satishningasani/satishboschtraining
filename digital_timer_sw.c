/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-12, 09:51, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file ProcessorExpert.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup ProcessorExpert_module ProcessorExpert module documentation
**  @{
*/         
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "trig.h"
#include "BitsIoLdd1.h"
#include "ca.h"
#include "BitsIoLdd2.h"
#include "sw1.h"
#include "BitIoLdd1.h"
#include "sw2.h"
#include "BitIoLdd2.h"
#include "run.h"
#include "BitIoLdd3.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
void ca(unsigned char k);
void ca(unsigned char k)
	{
 	k=~k;
 	ca_PutVal(k);
	}
/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
	unsigned int i,j,k,l,m,n,z,b;
	unsigned char a[]={(0x3f),(0x06),(0x5b),(0x4f),(0x66),(0x6d),(0x7d),(0x07),(0x7f),(0x6f)};
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
  while(1)
    {
	  if(sw1_GetVal()==0)
		  {   
	  	  	  if(i==10){
	  	  		i = 0;
	  	  		j++;
	  	  		 ca(a[j]);
	  	  	  for(z=0;z<0x7ffff;z++);
	  	  	  }
	  	  	  
	  	  	  else if(j==10)
	  	  	  {
	  	  		  j=0;
	  	  		  ca(a[j]);
	  	  		  for(z=0;z<0x7ffff;z++);
	  	  	  }  
  	  for(b=0;b<6;b++)
  	  {
  		  for(k=0;k<11;k++)
  		  {
  			  for(l=0;l<6;l++)
  			  {
  				  for(m=0;m<10;m++)
  				  {
  					 for(n=0;n<30;n++)
  					 {
  				      trig_PutVal(0xb);
  					  ca_PutVal(~a[10]);
  					  for(z=0;z<0xfff;z++);
  					  
  					  trig_PutVal(0xe);
  					  ca_PutVal(~a[m]);
  					  for(z=0;z<0xfff;z++);
  					  
  					  trig_PutVal(0xd);
  					  ca_PutVal(~a[l]);
  					  for(z=0;z<0xfff;z++);
  					  
  					  trig_PutVal(0xb);
  					  ca_PutVal(~a[k]);
  					  for(z=0;z<0xfff;z++);
  					  
  					  trig_PutVal(0x7);
  					  ca_PutVal(~a[b]);
  					  for(z=0;z<0xfff;z++);
  				  }
  			  }
  		  }
  	  }
    }
    }
    }
  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END ProcessorExpert */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
