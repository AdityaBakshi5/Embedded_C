#include <avr/io.h>
#include <util/delay.h>
#include "inc/Activity1.h"
#include "inc/Activity2.h"
int main()
{
    // Calling the system_init function which determines the status of LED actuator
    activity1();
    activity2();
    return 0;
}
