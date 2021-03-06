# EMBEDDED C PROJECT - SEAT HEATING APPLICATION 

# Objective
The Seat Heating control system is basically used to control the temperature of a car seat. When a passanger or a driver of the car seats on a car, the button sensor gets activated (which acts as one switch here). After that, the user can turn on the heater(which acts as another switch). The temperature sensor keeps monitoring and recording the temperature and sends the analog value to the microcontroller ATmega328. The microcontroller takes the analog input of the temperature sensor and gives output a temperature value through UART( through serial communication).


#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/AdityaBakshi5/Embedded_C/actions/workflows/Compile.yml/badge.svg)](https://github.com/AdityaBakshi5/Embedded_C/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/AdityaBakshi5/Embedded_C/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/AdityaBakshi5/Embedded_C/actions/workflows/CodeQuality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/01a94203ace64bc99a28fc4fb467e05a)](https://www.codacy.com/gh/AdityaBakshi5/Embedded_C/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=AdityaBakshi5/Embedded_C&amp;utm_campaign=Badge_Grade)|

## Schematic diagram
![Final](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity4/Activity_4_circuit.jpeg)

## Activity 1

|Logic-00|Logic-01|Logic-10|Logic-11|  
|:--:|:--:|:--:|:--:|  
|![Logic-00](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity1/Activity_1_00.jpeg)|![Logic-01](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity1/Activity_1_01.jpeg)|![Logic-10](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity1/Activity_1_10.jpeg)|![Logic-11](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity1/Activity_1_11.jpeg)|  
|LED OFF|LED OFF|LED OFF|LED ON|  
## Activity 2

|Logic-00|Logic-01|Logic-10|Logic-11|  
|:--:|:--:|:--:|:--:|  
|![Logic-00](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity2/Activity_2_ADCOFF(00).jpeg)|![Logic-01](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity2/Activity_2_ADCOFF(01).jpeg)|![Logic-10](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity2/Activity_2_ADCOFF(10).jpeg)|![Logic-11](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity2/Activity_2_ADCON(11).jpeg)|  
|LED OFF ADC OFF|LED OFF ADC OFF|LED OFF ADC OFF|LED ON ADC ON|  

## Activity 3

|ADC-1V|ADC-2V|ADC-3.55V|ADC-4.75V|  
|:--:|:--:|:--:|:--:|  
|![Logic-00](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity3/Activity3_PWM_20%25.jpeg)|![Logic-01](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity3/Activity3_PWM_40%25.jpeg)|![Logic-10](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity3/Activity3_PWM_71%25.jpeg)|![Logic-11](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity3/Activity3_PWM_95%25.jpeg)|  
|Output PWM-20%|Output PWM-40%|Output PWM-71%|Output PWM-95%|


## Activity 4
![Final](https://github.com/AdityaBakshi5/Embedded_C/blob/main/Images/Activity4/Activity_4_SerialMonitor.jpeg)


 
