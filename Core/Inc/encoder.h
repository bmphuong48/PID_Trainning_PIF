#ifndef INC_ENCODER_H_
#define INC_ENCODER_H_
#include "stdint.h"
#include "main.h"

typedef struct {
	int16_t velocity;
	int64_t position;
	uint32_t last_counter_value;
} encoder_instance;

void UpdateEncoder(encoder_instance *encoder_value, TIM_HandleTypeDef *htim);
void ResetEncoder(encoder_instance *encoder_value, TIM_HandleTypeDef *htim);

#endif /* INC_ENCODER_H_ */
