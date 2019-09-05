/**
  ******************************************************************************
  *               Copyright(C) 2018-2028 GDKY All Rights Reserved
  *
  * @file    main.c
  * @author  ZouZH
  * @version V1.03
  * @date    12-July-2018
  * @brief   main
  ******************************************************************************
  * 2013-12-10 V1.00  First create the file
  * 2018-07-12 V1.03  Replace Jlink RTT with elog output
  */

/* INCLUDES ----------------------------------------------------------------- */
#include "includes.h"
#include "system_msp430x44x.h"

/* TYPEDEFS ----------------------------------------------------------------- */

/* MACROS  ------------------------------------------------------------------ */

/* CONSTANTS  --------------------------------------------------------------- */

/* GLOBAL VARIABLES --------------------------------------------------------- */

/* GLOBAL FUNCTIONS --------------------------------------------------------- */

/* LOCAL VARIABLES ---------------------------------------------------------- */

/* LOCAL FUNCTIONS ---------------------------------------------------------- */

/**
 * @brief  Main
 * @param  None
 * @retval None
 */
int main(void)
{
  SystemInit();

    // Start independent watchdog
    //BspStartIWDG();

  #ifdef USE_FULL_ASSERT
    if (elog_init() == ELOG_NO_ERR)
      elog_start();
  #endif

    // Will only get here if there was not enough heap space to create the idle task.
    while(1)
    {
    }
}

/**
 * @brief  Reports the name of the source file and the source line number
 *          where the assert_param error has occurred.
 *
 * @param  file: pointer to the source file name
 *         line: assert_param error line source n
 *
 * @retval None
 */
void assert_failed(const char* file, uint32_t line)
{
    //taskDISABLE_INTERRUPTS();
    //printf("[%s][%d]Assert failed!\r\n", file, line);

    while (1)
    {
    }
}
