#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"

void app_main(void)
{
    printf("\n\n");
    printf("Hello World From Vaman Borad");
    while (1)
    {
        printf("Hello World from ESP-IDF!\n");
        vTaskDelay(pdMS_TO_TICKS(1000));//second
    }
}
