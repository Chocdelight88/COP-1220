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
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4
#define FIVE 5
#define SIX 6
#define SEVEN 7
#define EIGHT 8

int year;
int weight;
int weightClass;

int twentySevenHundred;
int thirtyEightHundred;

void welcomeUser();
void inputYear();
void inputWeight();

float computeFee(int y, int w);
void reportFee();

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
    
        if (weight < TWENTYSEVENHUNDRED){
        
            weightClass = ONE;
        
        }
        
        else if (weight <= THIRTYEIGHTHUNDRED){
        
            weightClass = TWO;
        
        }
        
        else if (weight > THIRTYEIGHTHUNDRED){
        
            
            weightClass = THREE;
        
        }
        
    }
    
    else if (year <= 1979){
   
        if (weight < TWENTYSEVENHUNDRED){
        
            
            weightClass = FOUR;
        }
        else if (weight <= THIRTYEIGHTHUNDRED){
        
            weightClass = FIVE;
        
        }
        else if (weight > THIRTYEIGHTHUNDRED){
        
        
            weightClass = SIX;
        }
    
    }
    
    else if (year >= 1980){
    
        if (weight < THIRTYFIVEHUNDRED){
        
            weightClass = SEVEN;
            
        }
        
        else if (weight >= THIRTYFIVEHUNDRED){
        
            weightClass = EIGHT;
            
        }
    
    }
    
    
    return fee;
}

void reportFee(){}