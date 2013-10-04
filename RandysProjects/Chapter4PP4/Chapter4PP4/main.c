//
//  main.c
//  Chapter4PP4
//
//  Created by Randy McMillan on 10/4/13.
//  Copyright (c) 2013 Randy McMillan. All rights reserved.
//

#include <stdio.h>

#define TWENTYSEVENHUNDRED 2700
#define THIRTYFIVEHUNDRED 3500
#define THIRTYEIGHTHUNDRED 3800

int year;
int weight;


int twentySevenHundred;
int thirtyEightHundred;

void welcomeUser();
void inputYear();
void inputWeight();

float computeFee(int y, int w);

void welcomeUser(){


    printf("Welcom e to this super awesome program!\n\n");
    
    
}

int main(int argc, const char * argv[])
{
    welcomeUser();

    inputYear();
    inputWeight();
    computeFee(year, weight);
    
    return 0;
}

void inputYear(){

    printf("Please enter the Model Year --> ");
    scanf("%d",&year);

    
}


void inputWeight(){

   printf("Please enter the Model Weight --> ");
    scanf("%d",&weight);

}

float computeFee(int y, int w){

    float fee = 0.0;
    
    if (year <= 1970){
    
        if (weight < TWENTYSEVENHUNDRED){}
        else if (weight <= THIRTYEIGHTHUNDRED){}
        else if (weight > THIRTYEIGHTHUNDRED){}
        
    }
    
    else if (year <= 1979){
   
        if (weight < TWENTYSEVENHUNDRED){}
        else if (weight <= THIRTYEIGHTHUNDRED){}
        else if (weight > THIRTYEIGHTHUNDRED){}
    
    }
    
    else if (year >= 1980){
    
        if (weight < THIRTYFIVEHUNDRED){}
        else if (weight >= THIRTYFIVEHUNDRED){}
    
    }
    
    
    return fee;
}
