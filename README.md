# Resistor Calculator

## Usnig user inputs, This C program can calculate :

> 1- Resistance Value  
> 2- Tolerance Range  
> 3- Resistor Temperature Coefficient  
> 4- Resistance Rate of Change in 1 C (Celsius )

# Equations used :

## 1- Calculating the Resistance Value :

## 4 band Resistor

> ![Eq](https://circuitdigest.com/sites/default/files/inlineimages/resistance-calculation.png)

|  4-Band  | Name |      Description      |
| :------: | :--: | :-------------------: |
| 1st Band |  a   | 1st significant digit |
| 2nd Band |  b   | 2nd significant digit |
| 3rd Band |  c   |      Multiplier       |
| 4th Band |  d   |       Tolerance       |

## 5 or 6 band Resistor

> ![](https://circuitdigest.com/sites/default/files/inlineimages/5-band-resistance-calculati.png)

| 5 or 6 Band | Name |      Description      |
| :---------: | :--: | :-------------------: |
|  1st Band   |  a   | 1st significant digit |
|  2nd Band   |  b   | 2nd significant digit |
|  3rd Band   |  c   | 3rd significant digit |
|  4th Band   |  d   |      Multiplier       |
|  5th Band   |  e   |       Tolerance       |

> ### 5 and 6 band resitors have the same way in calcualtion ecpet for the latter having two additional values, which is Temperature Coefficient and Resistance Rate of Change in 1 C

## 2- Calculating the Resistance Rate of Change for 6 band Resistor

`Resistance_Rate_of_Change` = Temperature_Coefficient \* Resistance_value / 1000000
