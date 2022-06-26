//Utkarsh Mishra
//RA2111003011484
//W1
#include <stdio.h>
#include <string.h>
int main(){
    FILE *fr;

    int id,units;
    float amt;
    char name[50];

    fr = fopen("Electricity bill", "w");

    // Taking input from user
    printf("Customer name: ");
    scanf("%s",&name[50]);
    printf("Customer id: ");
    scanf("%d",&id);
    printf("units Consumed: ");
    scanf("%d",&units);

    // Conditions
        if(units <= 50)
    {
        amt = units * 0.50;
    }
    else if(units <= 150)
    {
        amt = 25 + ((units-50) * 0.75);
    }
    else if(units <= 250)
    {
        amt = 100 + ((units-150) * 1.20);
    }
    else if(units <= 350)
    {
        amt = 220 + ((units-250) * 1.50);
    }
    else if(units <= 450)
    {
        amt = 370 + ((units-450) * 1.65)
    }
    else
    {
        amt = 535 + ((units-450) * 1.75)
    }
   
    // Saving data in file
    fprintf(fr,"\n***Electricity Bill*\n");
    fprintf(fr,"Customer name:\t%s\n",name);
    fprintf(fr,"Customer id:\t %d\n",id);
    fprintf(fr,"units Consumed:\t %d\n",units);
    fprintf(fr,"Total Amount charge %.2f\n",amt);
    fclose(fr);
    return 0;
}