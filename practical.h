#include <stdio.h>

void check_Balance(float balance);
float withdraw(float balance);
float Deposit();
int main(){

int choice =0;
float balance=0.0f;


printf("****Welcome to ATM****");

do{

        printf("\nSelect an Option \n");
        printf("\n1. check Balance \n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money \n");
        printf("4. Exit \n");
        printf("\nEnter Your choice \n");
        scanf("%d",&choice);

        switch(choice ){
            case 1:
                check_Balance(balance);
                break;
            case 2:
                balance = balance+Deposit();
                break;
            case 3:
                balance = balance - withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the Bank");
                break;
            default:
                printf("Invalid option please select 1 - 4 \n");



        }



}while(choice !=4 );


return 0;
}


// Check_balance function
void check_Balance(float balance){
    printf("Your balance is $%.2f \n",balance);
}

// Withdraw function
float withdraw(float balance){
    float amount = 0.0f;
    printf("Enter Amount to withdraw");
    scanf("%f",&amount);
    if(amount <0){
        printf("Invalid amount");
        return 0.0f;
    }
    else if(amount > balance){
        printf("Insufficient balance your balance is $%.2f",balance);
        return 0.0f;
    }
    else{
        printf("successfully withdraw $%.2f",amount);
        return amount;
    }

    return 0.0f;

}
//Deposit Function
float Deposit(){
    float amount = 0.0f;
    printf("Enter Amount to deposit");
    scanf("%f",&amount);
    if(amount<0){
        printf("Invalid amount ");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%.2f",amount);
        return amount;
    }

return 0.0f;
}

