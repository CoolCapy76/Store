#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int productChoice;
float total;
float milkAmount;
int meatType;
float meatAmount;
float cheeseAmount;
int cheesetype;
int eggAmount;
string menu;

float chikenprice = 5;
float porkprice = 7;
float beefprice = 10;
float milkPrice = 3;
float eggPrice = 0.5;
float cheesePrice1 = 10.5;
float cheesePrice2 = 12.5;
float cheesePrice3 = 14.5;



void milktext(){
    cout << "Enter Milk Amount In Liter" << endl;
    cin >> milkAmount;

    cout << "Amount is - " << milkAmount << "Liters and the price added to total is - " << milkAmount * milkPrice << endl;
    total = milkAmount * milkPrice;
    }



void eggtext(){
    cout << "Enter quantity - " << endl;
    cin >> eggAmount;
    cout << "Amount is - " << eggAmount << " Eggs and the price added to total is - " << eggAmount * eggPrice << endl;
    total = eggAmount * eggPrice;
}

void cheesetext1(){
    cout << "Enter Cheese Weight In Grams" << endl;
    cin >> cheeseAmount;
    cout << "Amount is - " << cheeseAmount << "Grams and the price added to total is - " << cheeseAmount * cheesePrice1<< endl;
    total = cheeseAmount * cheesePrice1;
}

void cheesetext2(){
    cout << "Enter Cheese Weight In Grams" << endl;
    cin >> cheeseAmount;
    cout << "Amount is - " << cheeseAmount << "Grams and the price added to total is - " << cheeseAmount * cheesePrice2<< endl;
    total = cheeseAmount * cheesePrice2;
}

void cheesetext3(){
    cout << "Enter Cheese Weight In Grams" << endl;
    cin >> cheeseAmount;
    cout << "Amount is - " << cheeseAmount << "Grams and the price added to total is - " << cheeseAmount * cheesePrice3<< endl;
    total = cheeseAmount * cheesePrice3;
}

void meattext1(){
    cout << "Enter Meat Weight In Grams" << endl;
    cin >> meatAmount;
    cout << "Amount is - " << meatAmount << "Grams and the price added to total is - " << meatAmount * chikenprice << endl;
    total = meatAmount * chikenprice;
}


void meattext2(){
cout << "Enter Meat Weight In Grams" << endl;
    cin >> meatAmount;
    cout << "Amount is - " << meatAmount << "Grams and the price added to total is - " << meatAmount * porkprice << endl;
    total = meatAmount * porkprice ;
}

void meattext3(){
cout << "Enter Meat Weight In Grams" << endl;
    cin >> meatAmount;
    cout << "Amount is - " << meatAmount << "Grams and the price added to total is - " << meatAmount * beefprice << endl;
    total = meatAmount * beefprice ;
}



double Menu() {
cout << "Welcome To Our Store" << endl;
cout << "Choose  What Shelf To Go" << endl;
cout << "For Milk - 1, For Meat - 2, For Cheese - 3, For Eggs - 4" << endl;
cin >> productChoice;


if (productChoice == 1){
    milktext();
}

else if (productChoice == 2){
    cout << "Choose Meat Type" << endl;
    cout << "For Chicken - 1, For Pork - 2 , For Beef - 3" << endl;
    cin >> meatType;
    if (meatType == 1){meattext1();}
    else if (meatType == 2){meattext2();}

    else if (meatType == 3){meattext3();}

    else {cout << "Entered Wrong Number" << endl;}

    }

else if (productChoice == 4){
    eggtext();
}

else if (productChoice == 3){
    cout << "Choose Cheese Type" << endl;
    cout << "For Cheader - 1, For Gauda - 2 , For Parmezan - 3" << endl;
    cin >> cheesetype;

    if (cheesetype == 1){cheesetext1();}
    else if (cheesetype == 2){cheesetext2();}
    else if (cheesetype == 3){cheesetext3();}
    else {cout << "Entered Wrong Number" << endl;}


    }

return total;
}



int main() {
system("Color 0A");
LOOP:do {
    start:Menu();
    cout <<"Thank you for Visiting." << endl;
    cout << "Total is - "<< total << endl;
    cout << "To shop again press 1 , To close program press 2" <<endl;
    int x;
    cin >> x;

    closeloop:while (true){
        if (x == 1){
            Menu();
            goto LOOP;
        }

        else if (x == 2){
            abort();
        }

    }



}
while (!Menu());



return 0;
}
