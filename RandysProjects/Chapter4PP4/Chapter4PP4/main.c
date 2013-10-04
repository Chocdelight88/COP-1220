//
//  main.c
//  Chapter4PP4
//
//  Created by Randy McMillan on 10/4/13.
//  Copyright (c) 2013 Randy McMillan. All rights reserved.
//

#include <stdio.h>

#define TWENTYSEVENHUNDRED	2700
#define THIRTYFIVEHUNDRED	3500
#define THIRTYEIGHTHUNDRED	3800

// Weight Class
#define ONE					1
#define TWO					2
#define THREE				3
#define FOUR				4
#define FIVE				5
#define SIX					6
#define SEVEN				7
#define EIGHT				8

// Fee Schedule
#define ONE_FEE				16.50
#define TWO_FEE				25.50
#define THREE_FEE			46.50
#define FOUR_FEE			27.00
#define FIVE_FEE			30.50
#define SIX_FEE				52.50
#define SEVEN_FEE			35.50
#define EIGHT_FEE			65.50

int		year;
int		weight;
int		weightClass;
float	fee;
int		twentySevenHundred;
int		thirtyEightHundred;

void welcomeUser();

void inputYear();

void inputWeight();

void computeFee(int y, int w);

void reportFee();

void welcomeUser()
{
	printf("Welcom e to this super awesome program!\n\n");
}

int main(int argc, const char *argv[])
{
	welcomeUser();

	inputYear();
	inputWeight();
	computeFee(year, weight);

	return 0;
}

void inputYear()
{
	printf("Please enter the Model Year --> ");
	scanf("%d", &year);
}

void inputWeight()
{
	printf("Please enter the Model Weight --> ");
	scanf("%d", &weight);
}

void computeFee(int y, int w)
{
	if (year <= 1970) {
		if (weight < TWENTYSEVENHUNDRED) {
			weightClass = ONE;
            fee = ONE_FEE;
		} else if (weight <= THIRTYEIGHTHUNDRED) {
			weightClass = TWO;
            fee = TWO_FEE;
		} else if (weight > THIRTYEIGHTHUNDRED) {
			weightClass = THREE;
            fee = THREE_FEE;
		}
	} else if (year <= 1979) {
		if (weight < TWENTYSEVENHUNDRED) {
			weightClass = FOUR;
            fee = FOUR_FEE;
		} else if (weight <= THIRTYEIGHTHUNDRED) {
			weightClass = FIVE;
            fee = FIVE_FEE;
		} else if (weight > THIRTYEIGHTHUNDRED) {
			weightClass = SIX;
            fee = SIX_FEE;
		}
	} else if (year >= 1980) {
		if (weight < THIRTYFIVEHUNDRED) {
			weightClass = SEVEN;
            fee = SEVEN_FEE;
		} else if (weight >= THIRTYFIVEHUNDRED) {
			weightClass = EIGHT;
            fee = EIGHT_FEE;
		}
	}
}

void reportFee() {}
