![pre](https://www.notion.so/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2F4c6685f6-0aec-42c4-98f7-b86ba69b7a79%2FUntitled.png?table=block&id=0423b50f-0c0e-456d-8bef-4e2fc51cf9f1&spaceId=954dbf57-3e9a-4cef-a54e-1a32a117b0fa&width=2000&userId=dd387179-deb5-4d86-8b12-c77b95e22ec1&cache=v2)
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

- 6 Band Resitors have two additional values, which is Temperature Coefficient and Resistance rate of change    in 1 ºC.

- `Temperature Coefficient` is a constant value choosen by the user.

- `Resistance Rate of Change` = (Temperature Coefficient) \* (Resistance value) / 1000000
