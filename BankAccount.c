#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define FLAG 1

int main ( ) {
    int day1, day2;
    int money;

    int balance = 0;
    double rday;
    double credit_i_rate, debit_i_rate;
    //double balance_new, balance_old = 0;

    printf("Enter credit interest rate [%%]:\n");
    if ( scanf("%lf", &credit_i_rate) != 1 ) {
        printf("Invalid input.\n");
        return 1;
    }
    credit_i_rate = credit_i_rate / 100;

    //printf("%f\n", credit_i_rate);
    printf("Enter debit interest rate [%%]:\n");
    if ( scanf("%lf", &debit_i_rate) != 1 ) { 
        printf("Invalid input.\n");
        return 1;
    }
    debit_i_rate = debit_i_rate / 100;

    //printf("%f\n",debit_i_rate);

    day1 = 0;
    rday = 0;

    printf("Enter transactions:\n");
    while( FLAG ) {
        if(scanf(" %d , %d ", &day2, &money) != 2 ) {
            printf("Invalid input.\n");
            return 1;
        }

        if(day1 > day2) {
            printf("Invalid input.\n");
            return 1;
        }

        money = money * 100;
        rday = day2 - day1;

        //( balance_old > 1 ) ? ((balance_new = (balance_old * (double)pow((1 + credit_i_rate / 100), rday)) + money)) : (balance_new = (balance_old * (double)pow((1 + debit_i_rate / 100), rday)) + money);
        
        if(balance > 0) {
            //printf("Credit Test\n");
            for(int i=1; i <= rday ; i++ ) {
                balance = (balance*(1+credit_i_rate));
                //printf("%d %d\n", i, balance); 
            }
        }
        
        if(balance < 0) {
            for(int i=1; i <= rday ; i++ ) {
                balance = (balance*(1+debit_i_rate)); 
            }
        }

        balance = balance + money;
        day1 = day2;

        //balance_old = balance_new;

        if(money == 0) {
            break;
        }
        //printf("%d %d\n", money, balance);
    }
    
    double printValue;
    printValue = balance/100.0;

    printf("Balance: %.2f\n", printValue);
    return 0;
}