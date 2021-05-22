//Jvon Allen
//Professor Carter
//Computer Science
//27 Apr 2019
//This program will simulate a drink machine
#include<iostream>
#include<string>
#include<cstdlib>
#include<iomanip>
using namespace std;

void exit();
//double totalEarned(double);
struct Drink
{
	string name; //Name of drink
	double cost; //Cost of drink
	int quantity; //Number of drinks
};

int main()
{
	string user_choice;
	int x;
	int y;
	double total_earned= 0.0;
	double drink_cost;
	double change;
	string drink_choice;

	//Create an array a 5 structures
	const int number_of_drinks= 5;
	Drink machine[number_of_drinks]= {
										{"Cola", 0.75, 20},
										{"Root Beer", 0.75, 20},
										{"Lemon-Lime", 0.75, 20},
										{"Grape Soda", 0.80, 20},
										{"Cream Soda", 0.80, 20}
									 };
    do
	{
	//Display the names of the drinks
	cout<<"\nThese are the drinks in stock:"<<endl; 
	for (x= 0; x< number_of_drinks; x++){
		cout<<machine[x].name<<endl;}
		
	//Allow user to enter a drink or exit
	cout<<"Enter yes if you would like to buy a drink or no to exit: ";
	cin>>user_choice;

	//Exit if the user chose not to buy a drink
	if(user_choice== "no"){
		cout<<"You've chosen not to buy a drink, good-bye."<<endl;}

	if(user_choice== "yes"){
		cout<<"What drink would you like to purchase? ";
		cin.ignore();
		getline(cin,drink_choice);

	for (y= 0; y< number_of_drinks; y++)
		if(drink_choice== machine[y].name){
			cout<<"You've chosen to buy '"<<machine[y].name<<"' and it will cost: $";}

	if(drink_choice== "Cola"){
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<machine[0].cost; //Display the cost of the drink the user selected
		cout<<"\nPlease note that negative amounts or amounts greater than $1.00 will dismiss the program."<<endl<<"Please insert money: ";
		cin>>drink_cost;

	if(drink_cost<machine[0].cost){
		cout<<"You did not enter enough money. Exit and try again."<<endl;
		exit();}
	
	if(drink_cost<0 || drink_cost>1.00){
		cout<<"Sorry we do not accept this amount. Exit and try again."<<endl;
		exit();}
	
	if(drink_cost>=0.75 && drink_cost<=1.00){
		change= (drink_cost-machine[0].cost); //Calculates the change for the user
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<"Your change is $"<<change<<endl;}
		machine[0].quantity--; //Subtracts one from the quantity of the drink selected 
		cout<<"There are "<<machine[0].quantity<< " Cola's left."<<endl;
			if(machine[0].quantity==0){
				cout<<"There are no more Cola's left."<<endl;}}
	
	if(drink_choice== "Root Beer"){
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<machine[1].cost;
		cout<<"\nPlease note that negative amounts or amounts greater than $1.00 will dismiss the program."<<endl<<"Please insert money: ";
		cin>>drink_cost;
		
	if(drink_cost<machine[1].cost){
		cout<<"You did not enter enough money. Exit and try again."<<endl;
		exit();}
	
	if(drink_cost<0 || drink_cost>1.00){
		cout<<"Sorry we do not accept this amount. Exit and try again."<<endl;
		exit();}
	
	if(drink_cost>=0.75 && drink_cost<=1.00){
		change= (drink_cost-machine[1].cost);
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<"Your change is $"<<change<<endl;}
		machine[1].quantity--;
		cout<<"There are "<<machine[1].quantity<< " Root Beer's left."<<endl;
			if(machine[1].quantity==0){
				cout<<"There are no more Root Beer's left."<<endl;}}

	if(drink_choice== "Lemon-Lime"){
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<machine[2].cost;
		cout<<"\nPlease note that negative amounts or amounts greater than $1.00 will dismiss the program."<<endl<<"Please insert money: ";
		cin>>drink_cost;
		
	if(drink_cost<machine[2].cost){
		cout<<"You did not enter enough money. Exit and try again."<<endl;
		exit();}
	
	if(drink_cost<0 || drink_cost>1.00){
		cout<<"Sorry we do not accept this amount. Exit and try again."<<endl;
		exit();}
	
	if(drink_cost>=0.75 && drink_cost<=1.00){
		change= (drink_cost-machine[2].cost);
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<"Your change is $"<<change<<endl;}
		machine[2].quantity--;
		cout<<"There are "<<machine[2].quantity<< " Lemon-Lime's left."<<endl;
			if(machine[2].quantity==0){
				cout<<"There are no more Lemon-Lime's left."<<endl;}}

	if(drink_choice== "Grape Soda"){
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<machine[3].cost;
		cout<<"\nPlease note that negative amounts or amounts greater than $1.00 will dismiss the program."<<endl<<"Please insert money: ";
		cin>>drink_cost;
		
	if(drink_cost<machine[3].cost){
		cout<<"You did not enter enough money. Exit and try again."<<endl;
		exit();}
	
	if(drink_cost<0 || drink_cost>1.00){
		cout<<"Sorry we do not accept this amount. Exit and try again."<<endl;
		exit();}
	
	if(drink_cost>=0.80 && drink_cost<=1.00){
		change= (drink_cost-machine[3].cost);
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<"Your change is $"<<change<<endl;}
		machine[3].quantity--;
		cout<<"There are "<<machine[3].quantity<< " Grape Soda's left."<<endl;
			if(machine[3].quantity==0){
				cout<<"There are no more Grape Soda's left."<<endl;}}

	if(drink_choice== "Cream Soda"){
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<machine[4].cost;
		cout<<"\nPlease note that negative amounts or amounts greater than $1.00 will dismiss the program."<<endl<<"Please insert money: ";
		cin>>drink_cost;
		
	if(drink_cost<machine[4].cost){
		cout<<"You did not enter enough money. Exit and try again."<<endl;
		exit();}
	
	if(drink_cost<0 || drink_cost>1.00){
		cout<<"Sorry we do not accept this amount. Exit and try again."<<endl;
		exit();}
	
	if(drink_cost>=0.80 && drink_cost<=1.00){
		change= (drink_cost-machine[4].cost);
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<"Your change is $"<<change<<endl;}
		machine[4].quantity--;
		cout<<"There are "<<machine[4].quantity<< " Cream Soda's left."<<endl;
			if(machine[4].quantity==0){
				cout<<"There are no more Cream Soda's left."<<endl;}}
	total_earned +=(drink_cost-change);} //Calculates the total earned by the vending machine
	} while (user_choice == "yes");
	
	if (user_choice == "no"){
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<"The total amount earned by the vending machine is $"<<total_earned<<endl;}
	system("pause");
	return 0;
}

void exit()
{
	exit(0);
}

