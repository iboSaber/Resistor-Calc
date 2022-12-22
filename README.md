![pre](https://drive.google.com/file/d/1LKauyNbX5vZ4vR9UZN0CULgC3tMU0tbf/view?usp=sharing)
# Resistor Calculator

- Hi Guys 🙋‍♂️, This C program use user inputs to calculate :

  1. Resistance Value.
  2. Tolerance Range.
  3. Resistance Rate of Change in 1 ºC (Celsius).
     <br />
     <br />

- I wrote this code for my university side project and thought it may be useful to someone out there.
- The code print out a table of the colors with thier vlaues depending on the type of the vlaue that are being inputed  Also besids the colors there are        strating from 0 which the user will input to select a certian color This was to make the code eaiser and aviod converting it from string to numbers.
- The table idea  was insipired by @ellyzabe8, Thanks Alot @ellyzabe8 for your efforet on your code I learned alot from it.
  <br />

# Equations used :

### 1. Calculating the Resistance value :

<br />

![](https://circuitdigest.com/sites/default/files/inlineimages/resistance-calculation.png)

|  4-Band  | Name |      Description      |
| :------: | :--: | :-------------------: |
| 1st Band |  a   | 1st significant digit |
| 2nd Band |  b   | 2nd significant digit |
| 3rd Band |  c   |      Multiplier       |
| 4th Band |  d   |       Tolerance       |

<br />

![](https://circuitdigest.com/sites/default/files/inlineimages/5-band-resistance-calculati.png)

| 5 or 6 Band | Name |      Description      |
| :---------: | :--: | :-------------------: |
|  1st Band   |  a   | 1st significant digit |
|  2nd Band   |  b   | 2nd significant digit |
|  3rd Band   |  c   | 3rd significant digit |
|  4th Band   |  d   |      Multiplier       |
|  5th Band   |  e   |       Tolerance       |

---

### 2. Calculating the Tolerance Range

- `Tolerance Range` = (Resistance value) - (Tolerance Range) ---- (Resistance value) + (ToleranceRange)

---

### 3. Calculating the Resistance rate of change in 1 ºC for 6 Band Resistor

- 6 Band Resitors have two additional values, which is Temperature Coefficient and Resistance rate of change in 1 ºC.

- `Temperature Coefficient` is a constant value choosen by the user.

- `Resistance Rate of Change` = (Temperature Coefficient) \* (Resistance value) / 1000000
