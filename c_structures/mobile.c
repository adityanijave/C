#include<stdio.h>
#include<string.h>

typedef struct mobile
{
    char brand_name[100];
    char model_name[100];
    char ram[50];
    char rom[50];
    long int rate;

}MOB;


int welcome();
void assigne_brand_details(int);
void main()
{
    
    int data = welcome();

    if (data == 1)
    {
        MOB M = {"Realme", "Y19 series", "8GB", "64GB", 12800};
        printf("Please, wait a moment....");
        printf("\nWow, It found perfect match for your search\nBrand name is %s\n", M.brand_name);
        printf("and its model name is %s\n", M.model_name);
        printf("having RAM %s and", M.ram);
        printf("ROM %s\n", M.rom);
        printf("and all you can have in just rupess %d/- only\n", M.rate);
    }
    else if (data == 2)
    {
        MOB M = {"Redme", "A series", "6GB", "128GB", 15000};
        printf("Please, wait a moment....");
        printf("\nWow, It found perfect match for your search\nBrand name is %s\n", M.brand_name);
        printf("and its model name is %s\n", M.model_name);
        printf("having RAM %s and", M.ram);
        printf("ROM %s\n", M.rom);
        printf("and all you can have in just rupess %d/- only\n", M.rate);
    }
    else if (data == 3)
    {
        MOB M = {"Apple", "X series", "16GB", "256GB", 128000};
        printf("Please, wait a moment....");
        printf("\nWow, It found perfect match for your search\nBrand name is %s\n", M.brand_name);
        printf("and its model name is %s\n", M.model_name);
        printf("having RAM %s and", M.ram);
        printf("ROM %s\n", M.rom);
        printf("and all you can have in just rupess %d/- only\n", M.rate);
    }
    else if (data == 4)
    {
        MOB M = {"Samsung", "G21 series", "4GB", "32GB", 18000};
        printf("Please, wait a moment....");
        printf("\nWow, It found perfect match for your search\nBrand name is %s\n", M.brand_name);
        printf("and its model name is %s\n", M.model_name);
        printf("having RAM %s and", M.ram);
        printf("ROM %s\n", M.rom);
        printf("and all you can have in just rupess %d/- only\n", M.rate);
    }
    else if (data == 5)
    {
        MOB M = {"Lava", "K21 series", "8GB", "64GB", 20000};
        printf("Please, wait a moment....");
        printf("\nWow, It found perfect match for your search\nBrand name is %s\n", M.brand_name);
        printf("and its model name is %s\n", M.model_name);
        printf("having RAM %s and", M.ram);
        printf("ROM %s\n", M.rom);
        printf("and all you can have in just rupess %d/- only\n", M.rate);
    }
    
}

int welcome()
{

    char userChoice[100];
    printf("\n\n\n\n        *** Welcome to Garud Mobile Shop ***\n\nHello there, I am Devid putra(AI)\nI am here to help you select the a perfect mobile which suits you more than your wife!!! (just kidding)\
    \nWe have different cell phone brands like\nRealme\nRedme\nApple\nSamsung\nLava\nSo, please tell me for which cell phone brand you are looking for?\n");
    gets(userChoice);


    if (strcmp(userChoice, "Realme") == 0)
    {
        return 1;
    }
    else if (strcmp(userChoice, "Redme") == 0)
    {
        return 2;
    }
    else if (strcmp(userChoice, "Apple") == 0)
    {
        return 3;
    }
    else if (strcmp(userChoice, "Samsung") == 0)
    {
        return 4;
    }
    else if (strcmp(userChoice, "Lava") == 0)
    {
        return 5;
    }
    else
    {
        printf("\nenter valid brand name!!!");

    }
}