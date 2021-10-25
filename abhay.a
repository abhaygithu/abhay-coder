#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *fp1, *fp2, *fp3, *fp4;
int pin_verification()
{
    int pin = 1234, user_get_pin;
    printf("enter your atm pin?\n");
    scanf("%d", &user_get_pin);

    if (pin != user_get_pin)
    {
        printf("invalid pin !\n Try agian?\n");
        pin_verification();
    }
    else
    {
        return 0;
    }
}
void deposit()
{
    pin_verification();
    int depo, x;
    char ach[50];
    fp1 = fopen("atm.txt", "r");
    if (fp1 == NULL)
    {
        fp3 = fopen("atm.txt", "w");
        fprintf(fp3, "0");
         fclose(fp3);
    }

    while (fgets(ach, 50, fp1) != NULL)
    {
    }
    x = atoi(ach);
    printf("your already amount is %d [Rs.]\n", x);
    fclose(fp1);

    printf("enter your amount which you want to deposit[Rs.]\n");
    scanf("%d", &depo);
    fp2 = fopen("atm.txt", "w");

    fprintf(fp2, "%d", x + depo);

    printf("Now your rupees is %d\n", x + depo);

    fclose(fp2);
}

void withdraw()
{
    pin_verification();
    int withd, x;
    char ach[50];
    fp4 = fopen("atm.txt", "r");
    if (fp4 == NULL)
    {
        fp1 = fopen("atm.txt", "w");
        fprintf(fp1, "0");
         fclose(fp1);
    }

    while (fgets(ach, 50, fp4) != NULL)
    {
    }
    x = atoi(ach);

    fclose(fp4);

    printf("enter your amount which you want to withdraw[Rs.]\n");
    scanf("%d", &withd);
    fp2 = fopen("atm.txt", "w");
    if (x - withd > 0 && x >= withd)
    {
        fprintf(fp2, "%d", x - withd);
        printf("please wait a few second!.....\n");

        for (size_t i = 0; i < 10000; i++)
        {
            for (size_t i = 0; i < 400000; i++)
            {
            }
        }
        printf("Your Transaction has been successfully!\n");
    }
    if (x < withd)
    {

        printf("your balence is :%d [Rs.].you are not withdraw amount!..\n", x);
        fprintf(fp2, "0");
    }

    fclose(fp2);
}

void check_balence()
{
    pin_verification();
    int withd, x;
    char ach[50];
    fp3 = fopen("atm.txt", "r");
    if (fp3 == NULL)
    {
        fp1 = fopen("atm.txt", "w");
        fprintf(fp1, "0");
        fclose(fp1);
    }
    
         
        while (fgets(ach, 50, fp3) != NULL)
        {
        }
        x = atoi(ach);
        printf("your balence is available :%d\n", x);
 
    fclose(fp3);
}

void dis_logic()
{

    int choice;
    printf("\n\n\nWelcome to our service\n");
    printf("1.withdraw\n");
    printf("2.deposit amount\n");
    printf("3.check balence\n");
    printf("4.exit\n");
    printf("what you want to do?.please enter the number\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        withdraw();
        break;
    case 2:
        deposit();
        break;
    case 3:
        check_balence();
        break;
    case 4:
        exit(0);

    default:
        break;
    }
}

int main()
{

    while (1)
    {
        dis_logic();
        printf("thanks , for using our services!\n");
        for (size_t i = 0; i < 50000; i++)
        {
            for (size_t i = 0; i < 100000; i++)
            {
            }
        }
    }
}