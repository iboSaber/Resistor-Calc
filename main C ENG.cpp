#include <stdio.h>
#include <math.h>


int main() {
	
	char interface[][30]= 
{
"\n       Colors        ",
"\n*------------------*",    
"\n|0         BLACK|",   
"\n|1         BROWN|",
"\n|2           RED|",
"\n|3        ORANGE|", 
"\n|4        YELLOW|", 
"\n|5         GREEN|",
"\n|6          BLUE|",
"\n|7        VIOLET|",
"\n|8          GRAY|",
"\n|9         WHITE|",
"\n*------------------*",
};



	char interface1[][30] = 
{
"\n      Multiplier        ",
"\n*----------------------*",    
"\n|10^0         0-BLACK|",   
"\n|10^1         1-BROWN|",
"\n|10^2           2-RED|",
"\n|10^3        3-ORANGE|", 
"\n|10^4        4-YELLOW|", 
"\n|10^5         5-GREEN|",
"\n|10^6          6-BLUE|",
"\n|10^7        7-VIOLET|",
"\n|10^8          8-GRAY|",
"\n|10^9         9-WHITE|",
"\n|0.1          10-GOLD|",
"\n|0.01       11-SILVER|",
"\n*----------------------*",
};

	char interface2[][30] = 
{
"\n 	  Tolerance       ",
"\n*-------------------*",    
"\n|0           0-BLACK|",   
"\n|1%          1-BROWN|",
"\n|2%            2-RED|",
"\n|3%         3-ORANGE|", 
"\n|4%         4-YELLOW|", 
"\n|0.5%        5-GREEN|",
"\n|0.25%        6-BLUE|",
"\n|0.10%      7-VIOLET|",
"\n|0.05%        8-GRAY|",
"\n|5%           9-GOLD|",
"\n|10%       10-SILVER|",
"\n*-------------------* ",
};

	char interface3[][30]= 
{
"\n Temperature_Coefficient  ",
"\n*----------------------*",       
"\n|100           0-BROWN|",
"\n|50              1-RED|",
"\n|15           2-ORANGE|", 
"\n|25           3-YELLOW|", 
"\n|10             4-BLUE|",
"\n|5            5-VIOLET|",
"\n*----------------------*",
};


	int a, b, e, c, d, num, TemCof;
	char answer;
	double result, Tolerance_Range, Resistance_Rate_of_Change;
	double Colors[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	double Multiplier[] = {1, 10, 100, 1000, 10000, 100000, 1000000,10000000, 100000000, 1000000000, 0.1, 0.01};
	double Tolerance[]= {0, 1, 2, 3, 4, 0.5, 0.25, 0.10, 0.05, 5, 10};
	double Temperature_Coefficient[] = {100, 50, 15, 25, 10, 5};
	
	printf("\nHello, User!\n\nThis program calculates the ohmic (Ohm) value of 4 and 5 and 6 band resistors"); 
	
	start:

	printf("\n\nChoose number of bands 4, 5, or 6..:");  scanf("%d", &num);
	
	while((num != 4) && (num != 5) && (num != 6)) // for incorrect input
	{
		printf("Invalid number\nPlease choose number of bands 4, 5, or 6..:");  scanf("%d", &num);
	}
	
	printf("\n\n\n\t\t\t<< Enter the number written next to the Colors in the table. >>");
	
//	To print an interface Table	
	for(int i = 0; i < 12; i++)
    {
  		printf("%s", interface[i]);
    } 
	
//	Band 1 
	printf("\n\nEnter the First Band..:");  scanf("%d", &a);
	
		while( a < 1 || a > 9  ) //for incorrect input, First Band can't take value of 0
	{
		printf("\nCAUTION!! The First Band cannot take this value, please re-enter the First Band..:");  scanf("%d", &a);
	}
	
	//	Band 2
	printf("\n\nEnter the Second Band..:");  scanf("%d", &b);
	
	while( b < 0 || b > 9)
	{
		printf("\nCAUTION!! The Second Band cannot take this value, please re-enter the Second Band..:");  scanf("%d", &b);
	}
	
	//	Band 3
	if(num != 4)
	{
		printf("\n\nEnter the Third band..:"); scanf("%d", &e);
		
		while(e < 0 || e > 9)
		{
			printf("\nCAUTION!! The Third Band cannot take this value, please re-enter the Third Band..:"); scanf("%d", &e);	
		}
	}

	system("cls"); // Clear screen
	
//	To print an interface Table
	for(int i = 0; i < 15; i++)
    {
  		printf("%s", interface1[i]);
    } 
    
//	Multiplier  
	printf("\n\nEnter Multiplier color..:");	scanf("%d", &c); 
	
	while( c < 0 || c > 11)
	{
		printf("\n\nCAUTION!! Multiplier cannot take this value, please re-enter Multiplier ..:"); scanf("%d", &c);
	}
	system("cls"); // Clear screen

//	To print an interface Table
	for(int i = 0; i < 14; i++)
    {
  		printf("%s", interface2[i]);
    } 
    
//	Tolerance
	printf("\n\nEnter the Tolerance color..:"); scanf("%d", &d);   
	
		while( d < 0 || d > 10)
	{
		printf("\n\nCAUTION!! Tolerance cannot take this value, please re-enter Tolerance..:"); scanf("%d", &d);
	}
	system("cls"); // Clear screen 
	
//	Calculation of resistance value when 5 and 6 bands 

	if(c == 10)
	{
		result = (100 * Colors[a] + 10 * Colors[b] + Colors[e]) / 10; // When the Multiplier color is Gold
	}
	else if(c == 11)
	{
		result = (100 * Colors[a] + 10 * Colors[b] + Colors[e]) / 100; // When the Multiplier color is Silver
	}	
	else
	{
		result = (100 * Colors[a] + 10 * Colors[b] + Colors[e]) * pow(10, c); // When the color of carapn becomes other colors
	}
// Calculating Resistance_value when 4-band 
	if(num == 4 )
	{
		result = result /10;
	}	

//	Tolerance value calculation
	Tolerance_Range = (result * Tolerance[d]) / 100;	
	
// Temperature_coefficient and Resistance_Rate_of_Change calculation	
	if (num == 6)
	{
		for(int i = 0; i < 9; i++)
    	{
  			printf("%s", interface3[i]);
    	} 
//	Temperature coefficient
		printf("\n\nEnter the Temperature Coefficient coefficient color..:"); scanf("%d", &TemCof);
		
		while( TemCof < 0 || TemCof > 5)
		{
			printf("\n\nCAUTION!! The Temperature Coefficient coefficient cannot take this value, please re-enter the Temperature Coefficient coefficient..:"); scanf("%d", &TemCof);
		}

//	Resistance_Rate_of_Change
		Resistance_Rate_of_Change = Temperature_Coefficient[TemCof] * result / 1000000;
	}
	
	system("cls");
	
	//	Entered values
	printf("\nEntered values..:\t Band1: %.0lf\tBand2: %.0lf\t", Colors[a], Colors[b]);

	if (num != 4)
	{
		printf("Band3: %.0lf\t", Colors[e]);
	}
	
	printf("Multiplier: %.2lf\t Tolerance: %.2lf\t\n\n Resistance_value = %.2lf  +- %.2lf%%\n Tolerance_Range..: %.4lf (ohm) -- %.4lf(ohm)\n", Multiplier[c], Tolerance[d], result, Tolerance[d], result - Tolerance_Range, result + Tolerance_Range);

	if(num == 6)
	{
		printf(" Temperature_Coefficient..: %.0lf ppm/C\n Resistance_Rate_of_Change..: %lf ohm", Temperature_Coefficient[TemCof], Resistance_Rate_of_Change);
	}
	
	printf("\n\nWould you like to make another transaction?\nReply with  y/n ..:\t"); scanf("%s", &answer);

	if(answer == 'y')
	{
		system ("cls");
		goto start;
	}
	
	return 0;
}
