#include "main.h"
#include <string.h>

uint8_t RAM_D2 some_data[DATA_SIZE];

int main(void){
	RCC_init();
	MPU_Config();	


	memset(some_data, 0xAA, DATA_SIZE);
	while(1){

	};

}

