#ifndef _SHT3X_H
#define _SHT3X_H


int SHT3X_init();
int SHT3X_singleShotMeasure(double *temperature, double *humidity);

#endif