#ifndef _ADPD4100_H
#define _ADPD4100_H

#include "adpd4100_reg.h"

#include <stdint.h>


/******************************************************************************/
/*************************** Types Declarations *******************************/
/******************************************************************************/



/******************************************************************************/
/************************ Functions Declarations ******************************/
/******************************************************************************/

/** Init SPI for ADPD4100 */
int ADPD4100_init(void);

/** Read device register. */
int ADPD4100_readRegister(uint16_t addr, uint16_t *data);

/** Write device register. */
int ADPD4100_writeRegister(uint16_t addr, uint16_t data);

/** Do a read and write of a register to update only part of a register. */
int ADPD4100_writeRegisterMask(uint16_t addr, uint16_t data, uint16_t mask);

#endif