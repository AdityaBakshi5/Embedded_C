#include <avr/io.h>
#include <util/delay.h>
#include "../inc/Activity.h"
int main()
{
    // Calling the system_init function which determines the status of LED actuator
    system_init();
    return 0;
}
