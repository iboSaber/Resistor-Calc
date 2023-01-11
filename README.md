![pre](https://www.notion.so/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2F4c6685f6-0aec-42c4-98f7-b86ba69b7a79%2FUntitled.png?table=block&id=0423b50f-0c0e-456d-8bef-4e2fc51cf9f1&spaceId=954dbf57-3e9a-4cef-a54e-1a32a117b0fa&width=2000&userId=dd387179-deb5-4d86-8b12-c77b95e22ec1&cache=v2)

# Resistor Calculator

- Hi Guys 🙋‍♂️, This C program use user inputs to calculate :

  1. Resistance Value.
  2. Tolerance Range.
  3. Resistance Rate of Change in 1 ºC (Celsius).
     <br />
     <br />

- I wrote this code for my university side project and thought it may be useful to someone out there.
- The code print out a table of the colors with thier values depending on the type of the value that are being inputed . Also right next to the colors there are numbers strating from 0 which the user will input to select a certian color. This approach aims to make the code eaiser and avoid converting it from string to numbers.
- The table idea was insipired by @ellyzabe8, Thanks Alot @ellyzabe8 for your efforet on your code I learned alot from it.
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

---

## **`Flowchart`**

![first pic](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/96f03fe7-1984-4adf-9b7f-3f046822af98/Ak_emas.drawio_%281%29.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=AKIAT73L2G45EIPT3X45%2F20221227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20221227T130457Z&X-Amz-Expires=86400&X-Amz-Signature=47ea55f378b81ecf15162ed68645500904450a449de613fb4176d485f5bbced7&X-Amz-SignedHeaders=host&response-content-disposition=filename%3D%22Ak%25C4%25B1%25C5%259F%2520%25C5%259Femas%25C4%25B1.drawio%2520%281%29.png%22&x-id=GetObject)
![seconed pic](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/012ac6fd-0428-4d3c-9af6-334f792a0690/Ak_emas.drawio_%282%29.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=AKIAT73L2G45EIPT3X45%2F20221227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20221227T130502Z&X-Amz-Expires=86400&X-Amz-Signature=1ffbd8f630066602ea0830952c9511de5efdaf8e04fc657617acfc4f1a12a992&X-Amz-SignedHeaders=host&response-content-disposition=filename%3D%22Ak%25C4%25B1%25C5%259F%2520%25C5%259Femas%25C4%25B1.drawio%2520%282%29.png%22&x-id=GetObject)
