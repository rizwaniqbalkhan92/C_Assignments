#include <stdio.h>
#include <stdlib.h>

int main()
{

    system("cls");
    int previousUnits, currentUnits, unitDifferences, billAgain, billCommercialPlusTax, billType, bill, billCommercial, consumedUnits, billResidential, residentialNormal = 7, residentialUpper = 10, residentialHigher = 13, commercialNormal = 12, commercialUpper = 19, commercialHigher = 25, saleTaxCommercial = 6000;
    printf("=================================> WELCOME TO ELECTRICITY BILL GENERATOR <=============================\n");

    do
    {

        printf("Enter Your Previous Units \n ");
        scanf("%d", &previousUnits);
        printf("Enter Your Current Units \n ");
        scanf("%d", &currentUnits);
        unitDifferences = currentUnits - previousUnits;
        printf("You have consumed %d units this month  \n ", unitDifferences);
        printf("Choose Your Property Type \n 1) Commercial \n 2) Residential \n");
        scanf("%d", &billType);

        billResidential = unitDifferences * residentialNormal;

        switch (billType)
        {
        case 1:
            printf("COMMERCIAL METER BILL GENERATOR \n");
            if (unitDifferences <= 100)
            {
                billCommercialPlusTax = unitDifferences * commercialNormal + saleTaxCommercial;
                billCommercial = unitDifferences * commercialNormal;
                printf("Previous Units : %d \n Current Units : %d \n Consumed Units : %d \n This Month Bill : %d \n Sale Tax : %d \n  =============== \n  + Total : %d on 31-July-2022 \n After Due : %d \n ==============\n ", previousUnits, currentUnits, unitDifferences, billCommercial, saleTaxCommercial, billCommercialPlusTax, billCommercialPlusTax + 300);
                printf("If  you want to Generate another Bill so please Press 1 \n");
                scanf("%d", &billAgain);
                system("cls");
            }
            else if (unitDifferences > 100 && unitDifferences <= 200)
            {
                billCommercialPlusTax = unitDifferences * commercialUpper + saleTaxCommercial;
                billCommercial = unitDifferences * commercialUpper;
                printf("Previous Units : %d \n Current Units : %d \n Consumed Units : %d \n This Month Bill : %d \n Sale Tax : %d \n  =============== \n  + Total : %d on 31-July-2022 \n After Due : %d \n ==============\n ", previousUnits, currentUnits, unitDifferences, billCommercial, saleTaxCommercial, billCommercialPlusTax, billCommercialPlusTax + 300);
                printf("If  you want to Generate another Bill so please Press 1 \n");
                scanf("%d", &billAgain);
                system("cls");
            }
            else if (unitDifferences > 200)
            {
                billCommercialPlusTax = unitDifferences * commercialHigher + saleTaxCommercial;
                billCommercial = unitDifferences * commercialHigher;
                printf("Previous Units : %d \n Current Units : %d \n Consumed Units : %d \n This Month Bill : %d \n Sale Tax : %d \n  =============== \n  + Total : %d on 31-July-2022 \n After Due : %d \n ==============\n ", previousUnits, currentUnits, unitDifferences, billCommercial, saleTaxCommercial, billCommercialPlusTax, billCommercialPlusTax + 300);
                printf("If  you want to Generate another Bill so please Press 1 \n");
                scanf("%d", &billAgain);
                system("cls");
            }
            else
            {
                printf("Your Bill units generated high bill please check the meter ");
                printf("If  you want to Generate another Bill so please Press 1 \n");
                scanf("%d", &billAgain);
                system("cls");
            }
            break;
        case 2:
            if (unitDifferences <= 100)
            {

                billResidential = unitDifferences * residentialNormal;
                printf("Previous Units : %d \n Current Units : %d \n Consumed Units : %d \n This Month Bill : %d \n  =============== \n  + Total : %d on 31-July-2022 \n After Due : %d \n ==============\n ", previousUnits, currentUnits, unitDifferences, billResidential, billResidential, billResidential + 300);
                printf("If  you want to Generate another Bill so please Press 1 \n");
                scanf("%d", &billAgain);
                system("cls");
            }
            else if (unitDifferences > 100 && unitDifferences <= 200)
            {
                billResidential = unitDifferences * residentialUpper;
                printf("Previous Units : %d \n Current Units : %d \n Consumed Units : %d \n This Month Bill : %d \n  =============== \n  + Total : %d on 31-July-2022 \n After Due : %d \n ==============\n ", previousUnits, currentUnits, unitDifferences, billResidential, billResidential, billResidential + 300);
                printf("If  you want to Generate another Bill so please Press 1 \n");
                scanf("%d", &billAgain);
                system("cls");
            }
            else if (unitDifferences > 200)
            {
                billResidential = unitDifferences * residentialHigher;
                printf("Previous Units : %d \n Current Units : %d \n Consumed Units : %d \n This Month Bill : %d \n  =============== \n  + Total : %d on 31-July-2022 \n After Due : %d \n ==============\n ", previousUnits, currentUnits, unitDifferences, billResidential, billResidential, billResidential + 300);
                printf("If  you want to Generate another Bill so please Press 1 \n");
                scanf("%d", &billAgain);
                system("cls");
                
            }
            else
            {
                printf("Your Bill units generated high bill please check the meter ");
            }
        default:
            printf("Please Choose correct value 1 or 2 \n" );
            break;
        }
    } while (billAgain == 1);
}
