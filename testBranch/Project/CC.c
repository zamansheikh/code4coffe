#include<stdio.h>
//project Zaman4031

int main()
{
	system("cls");
    printf("Welcome To Currency Converter Program\n\nProject by Zaman4031\n\n");
    printf("Available Currency List\n\n");
    int i=0;
	do{
        float GBP1 = 0.0085;
	    char gbp[30]="Pound";
	    float EUR2 = 0.0100;
	    char eur[30]="Euro";
	    float USD3 = 0.012;
	    char usd[30]="Dollar";
	    float AUD4 = 0.016;
	    char aud[30]="Australian_Dollar";
	    float NZD5 = 0.017;
	    char nzd[30]="New_Zealand_Dollar";
	    float CAD6 = 0.015;
	    char cad[30]="Canadian_Dollar";
	    float JPY7 = 1.30;
	    char jpy[30]="Yen";
	    float INR8 = 0.88;
	    char inr[30]="Rupee";
	    float CHF9 = 0.011;
	    char chf[30]="Swiss Franc";
	    float AED10 = 0.043;
	    char aed[30]="Dirham";
	    float ZAR11 = 0.17;
	    char zar[30]="South African Rand";
	    float RUB12 = 0.88;
	    char rub[30]="Russian Rouble";
	    float KWD13 = 0.0035;
	    char kwd[30]="Kuwet Dinner";
	    float IDR14 = 171.23;
	    char idr[30]="Indonesian Rupiah";
	    float CNY15 = 0.076;
	    char cny[30]="Chinese Yuan";
	    float SAR16 = 0.044;
	    char sar[30]="Soudi Riyal";

	    printf("Please Select Your Currency by Number\n");
	    printf("GBP=1\nEUR=2\nUSD=3\nAUD=4\n");
	    printf("NZD=5\nCAD=6\nJPY=7\nINR=8\n");
	    printf("CHF=9\nAED=10\nZAR=11\nRUB=12\n");
	    printf("KWD=13\nIDR=14\nCNY=15\nSAR=16\n\n");
        printf("Your Currency Number: ");
	    int CURR;
	    scanf("%d",&CURR);
	    printf("How much TK?\n");
	    float TAKA;
	    scanf("%f",&TAKA);
	    float CNG;
	    switch(CURR)
        {
            case 1:
            CNG = TAKA * GBP1;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,gbp);
            break;
            case 2:
            CNG = TAKA * EUR2;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,eur);
            break;
            case 3:
            CNG = TAKA * USD3;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,usd);
            break;
            case 4:
            CNG = TAKA * AUD4;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,aud);
            break;
            case 5:
            CNG = TAKA * NZD5;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,nzd);
            break;
            case 6:
            CNG = TAKA * CAD6;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,cad);
            break;
            case 7:
            CNG = TAKA * JPY7;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,jpy);
            break;
            case 8:
            CNG = TAKA * INR8;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,inr);
            break;
            case 9:
            CNG = TAKA * CHF9;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,chf);
            break;
            case 10:
            CNG = TAKA * AED10;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,aed);
            break;
            case 11:
            CNG = TAKA * ZAR11;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,zar);
            break;
            case 12:
            CNG = TAKA * RUB12;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,rub);
            break;
            case 13:
            CNG = TAKA * KWD13;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,kwd);
            break;
            case 14:
            CNG = TAKA * IDR14;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,idr);
            break;
            case 15:
            CNG = TAKA * CNY15;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,cny);
            break;
            case 16:
            CNG = TAKA * SAR16;
            printf("%.2f Taka = %.2f %s",TAKA,CNG,sar);
            break;
            default:
            printf("Error0\n");

        }
        printf("\n\n");



        printf("\nDo you wanna exit?\nPress 1 for Continue Press 0 for Exit Program\n\n");
        scanf("%d",&i);
    }while(i == 1);
	
	printf("\n \n \n \n \n \n");
	return 0;
}