#ifndef _AD5941_H
#define _AD5941_H

#include "ad5941_reg.h"

#include <stdint.h>

// SPI Command
#define AD5941_SPICMD_SETADDR   0x20
#define AD5941_SPICMD_READREG   0x6d
#define AD5941_SPICMD_WRITEREG  0x2d
#define AD5941_SPICMD_READFIFO  0x5f


int AD5941_init(void);

int AD5941_readRegister(uint16_t addr, uint32_t *data, int numHalfword);
int AD5941_writeRegister(uint16_t addr, uint32_t *data, int numHalfword);

// 之后改进的函数如下
int AD5941_readRegisterSYT(uint16_t addr, uint32_t *data);
int AD5941_writeRegisterSYT(uint16_t addr, uint32_t data);
void AD5940_WriteReg(uint16_t RegAddr, uint32_t RegData);
uint32_t AD5940_ReadReg(uint16_t RegAddr);
#endif