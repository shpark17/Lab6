#include<stdlib.h>
#include<stdio.h>
#include<math.h>

/* 1. Insert the required items in the other 2 enumerated types*/
typedef enum { Red = 1, White } Color;
typedef enum { Roses = 1, Lilies, Daisies } Flower;
typedef enum { Bonquet = 1, Vase } Arrangement;

/*Function prototype */
double getCost(Flower flower, Color  color, Arrangement arr);

int main (int argc, char **argv) {

    //You can declare variables that hold your enums just like regular variables
	Flower flower;
	Color  color;
	Arrangement arr;
	/* 3. Declare the other required variable(s)*/
	
	//DO NOT CHANGE THIS BLOCK OF printf AND scanf STATEMENTS	
	printf("\nTypes of flowers\n");
	printf("1. Roses\n");
	printf("2. Lilies\n");
	printf("3. Daisies\n");
	printf("Please enter the item number for your choice: ");
	scanf("%d", &flower);
		
	printf("\nColor choices\n");
	printf("1. Red\n");
	printf("2. White\n");
	printf("Please enter the item number for your choice: ");
	scanf("%d", &color);
		
	printf("\nArrangements\n");
	printf("1. Bouquet\n");
	printf("2. Vase\n");
	printf("Please enter the item number for your choice: ");
	scanf("%d", &arr);
	
	/*4  complete the  function call  and print the cost*/
	double cost = getCost(flower, color, arr);
	printf("Your total cost is $%f\n", cost);
	
	return 0;
}

/* 2. Implement the function getCost */
double getCost(Flower flower, Color  color, Arrangement arr) {
	double flowerCost = 0;
	double additionalCost, additionalCost2;
  //you can use your enum in expressions
  //Possible example: if(flower == Rose) {...}
  //TODO: Compute the base price here
  if(flower == Roses) {
	flowerCost = 30;
  }  if(flower == Lilies) {
	flowerCost = 20;
  }  if(flower == Daisies) {
	  flowerCost = 45;
  } 
  //TODO: add additional color-flower costs here 
  if(color == Red && flower == Lilies) {
	  additionalCost = 25;
  }  if(color == Red && flower == Daisies) {
	  additionalCost = 50;
  }  if(color == White && flower == Roses) {
	  additionalCost = 40;
  //TODO: add additional cost for vases
  if(arr == Vase) {
	  additionalCost2 = flowerCost + 10;
  //TODO: return the total cost here
return cost = flowerCost + additionalCost + additionalCost2
  printf("Your total cost is %f\n", cost);

}
