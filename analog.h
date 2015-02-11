
#ifndef _ANALOG_H
#define _ANALOG_H

#include "firmware.h"

#define ADC_FREQ   2000000UL

#define V_ADC_CH    ADC_CH0
#define I_ADC_CH    ADC_CH1

void analog_config(circuit_t *circuit);
volatile float analog_get_V_sample(void);
volatile float analog_get_I_sample(void);


volatile uint16_t analog_get_I_sample_calibration(void);
volatile uint16_t analog_get_V_sample_calibration(void);

volatile uint16_t analog_get_I_rms_sample_calibration(uint16_t i_mean);
volatile uint16_t analog_get_V_rms_sample_calibration(uint16_t i_mean);
#endif /* _ANALOG_H */
