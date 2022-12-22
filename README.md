# Resistor Calculator

## Usnig user inputs, This C program can calculate :

- Resistance Value
- Tolerance Range
- Resistance Rate of Change in 1 ºC (Celsius)

# Equations used :

## 1- Calculating the Resistance value :

 <img align="right" width="300" height="50" src="https://circuitdigest.com/sites/default/files/inlineimages/resistance-calculation.png">

|  4-Band  | Name |      Description      |
| :------: | :--: | :-------------------: |
| 1st Band |  a   | 1st significant digit |
| 2nd Band |  b   | 2nd significant digit |
| 3rd Band |  c   |      Multiplier       |
| 4th Band |  d   |       Tolerance       |

<img align="right" width="300" height="50" src="https://circuitdigest.com/sites/default/files/inlineimages/5-band-resistance-calculati.png">

| 5 or 6 Band | Name |      Description      |
| :---------: | :--: | :-------------------: |
|  1st Band   |  a   | 1st significant digit |
|  2nd Band   |  b   | 2nd significant digit |
|  3rd Band   |  c   | 3rd significant digit |
|  4th Band   |  d   |      Multiplier       |
|  5th Band   |  e   |       Tolerance       |

---

## 2- Calculating the Tolerance Range

- `Tolerance Range` = (Resistance value) - (Tolerance Range) ---- (Resistance value) + (ToleranceRange)

---

## 3- Calculating the Resistance rate of change in 1 ºC for 6 Band Resistor

- 6 Band Resitors have two additional values, which is Temperature Coefficient and Resistance rate of change in 1 ºC

- `Temperature Coefficient` is a constant value choosen by the user

- `Resistance Rate of Change` = (Temperature Coefficient) \* (Resistance value) / 1000000
