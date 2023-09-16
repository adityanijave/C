#include<stdio.h>


void main(){
	
	unsigned int number = 0;
	char P3 = "0x00";
	
	while (1)
	{
		P3 = "0x80";       // LED 1
		
		for(number = 0; number <= 1000; number++)		// Delay 1
	{
        printf("%d%d", number, P3);

	}
    printf("\n");
	
	P3 = "0x40";       // LED 2
		
		for(number = 0; number <= 1000; number++)		// Delay 2
	{
        printf("%d%d", number, P3);

	}
        printf("\n");
	
	P3 = "0x20";       // LED 3
		
		for(number = 0; number <= 1000; number++)		// Delay 3
	{
        printf("%d%d", number, P3);
	}
        printf("\n");
	
	P3 = "0x10";       // LED 4
		
		for(number = 0; number <= 1000; number++)		// Delay 4
	{
        printf("%d%d", number, P3);

	}
        printf("\n");
	
	P3 = "0x08";       // LED 5
		
		for(number = 0; number <= 1000; number++)		// Delay 5
	{
        printf("%d%d", number, P3);

	}
        printf("\n");
	
	P3 = "0x04";       // LED 6
		
		for(number = 0; number <= 1000; number++)		// Delay 6
	{
        printf("%d%d", number, P3);

	}
        printf("\n");
	
	P3 = "0x02";       // LED 7
		
		for(number = 0; number <= 1000; number++)		// Delay 7
	{
        printf("%d%d", number, P3);

	}
        printf("\n");
	
	P3 = "0x01";       // LED 8
		
		for(number = 0; number <= 1000; number++)		// Delay 8
	{
        printf("%d%d", number, P3);

	}
        printf("\n");
	
	}
}