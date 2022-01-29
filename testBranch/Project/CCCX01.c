#include<stdio.h>
//project Zaman4031

int main()
{
	system("cls");
    printf("Welcome To Currency Converter Program\n\nProject by Zaman4031\n\n");
    printf("Available Currency List\nAll Currency Will be Available Soon\n");
    int i=0;
	do{
        float BDT0 =1.00;
        char bdt[30]="Bangladeshi Taka";
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

	    printf("Please Select Your Currency 2\n");
	    printf("BDT=0\nGBP=1\nEUR=2\nUSD=3\nAUD=4\n");
	    printf("NZD=5\nCAD=6\nJPY=7\nINR=8\n");
	    printf("CHF=9\nAED=10\nZAR=11\nRUB=12\n");
	    printf("KWD=13\nIDR=14\nCNY=15\nSAR=16\n\n");
        printf("Your Input Currency Number: ");
        
	    int CURR1;
	    scanf("%d",&CURR1);
        printf("\nYour OutPut Currency Number: ");
        int CURR;
        scanf("%d",&CURR);
    
        printf("\nHow much Money you wanna Convert?\n");
        float TAKA0;  
	    scanf("%f",&TAKA0);
        float TAKA = TAKA0;
        switch(CURR1)
        {
            case 0:
            TAKA = 1 * TAKA;
            break;
            case 1:
            TAKA = 117.48 * TAKA;
            break;
            case 2:
            TAKA = 100.51 * TAKA;
            break;
            case 3:
            TAKA = 84.84 * TAKA;
            break;
            case 4:
            TAKA = 63.46 * TAKA;
            break;
            case 5:
            TAKA = 59.20 * TAKA;
            break;
            case 6:
            TAKA = 67.99 * TAKA;
            break;
            case 7:
            TAKA = 0.77 * TAKA;
            break;
            case 8:
            TAKA = 1.14 * TAKA;
            break;
            case 9:
            TAKA = 92.57 * TAKA;
            break;
            case 10:
            TAKA = 23.10 * TAKA;
            break;
            case 11:
            TAKA = 5.82 * TAKA;
            break;
            case 12:
            TAKA = 1.14 * TAKA;
            break;
            case 13:
            TAKA = 282.11 * TAKA;
            break;
            case 14:
            TAKA = 0.0059 * TAKA;
            break;
            case 15:
            TAKA = 13.12 * TAKA;
            break;
            case 16:
            TAKA = 22.62 * TAKA;
            break;
            default:
            printf("Error\n");
        }

	    float CNG;
	    switch(CURR)
        {
            case 0:
            CNG = TAKA * BDT0;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,bdt);
            //new break BOYS
            break;
            //new case BOYS
            case 1:
            CNG = TAKA * GBP1;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,gbp);
            //new break BOYS
            break;
            //new case BOYS
            case 2:
            CNG = TAKA * EUR2;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,eur);
            //new break BOYS
            break;
            //new case BOYS
            case 3:
            CNG = TAKA * USD3;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,usd);
            //new break BOYS
            break;
            //new case BOYS
           
            case 4:
            CNG = TAKA * AUD4;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,aud);
            //new break BOYS
            break;
            //new case BOYS

            case 5:
            CNG = TAKA * NZD5;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,nzd);
            //new break BOYS
            break;
            //new case BOYS
            case 6:
            CNG = TAKA * CAD6;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,cad);
            //new break BOYS
            break;
            //new case BOYS
           case 7:
            CNG = TAKA * JPY7;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,jpy);
            //new break BOYS
            break;
            //new case BOYS
            case 8:
            CNG = TAKA * INR8;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,inr);
            //new break BOYS
            break;
            //new case BOYS
            case 9:
            CNG = TAKA * CHF9;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,chf);
            //new break BOYS
            break;
            //new case BOYS
            case 10:
            CNG = TAKA * AED10;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,aed);
            //new break BOYS
            break;
            //new case BOYS
            case 11:
            CNG = TAKA * ZAR11;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,zar);
            //new break BOYS
            break;
            //new case BOYS
            case 12:
            CNG = TAKA * RUB12;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,rub);
            //new break BOYS
            break;
            //new case BOYS
            case 13:
            CNG = TAKA * KWD13;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,kwd);
            //new break BOYS
            break;
            //new case BOYS
            case 14:
            CNG = TAKA * IDR14;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,idr);
            //new break BOYS
            break;
            //new case BOYS
            case 15:
            CNG = TAKA * CNY15;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,cny);
            //new break BOYS
            break;
            //new case BOYS
            case 16:
            CNG = TAKA * SAR16;
            printf("%.2f ",TAKA0);
            switch(CURR1)
            {
                case 0:
                printf("%s",bdt);
                break;
                case 1:
                printf("%s",gbp);
                break;
                case 2:
                printf("%s",eur);
                break;
                case 3:
                printf("%s",usd);
                break;
                case 4:
                printf("%s",aud);
                break;
                case 5:
                printf("%s",nzd);
                break;
                case 6:
                printf("%s",cad);
                break;
                case 7:
                printf("%s",jpy);
                break;
                case 8:
                printf("%s",inr);
                break;
                case 9:
                printf("%s",chf);
                break;
                case 10:
                printf("%s",aed);
                break;
                case 11:
                printf("%s",zar);
                break;
                case 12:
                printf("%s",rub);
                break;
                case 13:
                printf("%s",kwd);
                break;
                case 14:
                printf("%s",idr);
                break;
                case 15:
                printf("%s",cny);
                break;
                case 16:
                printf("%s",sar);
                break;
                default:
                printf("Error\n");
            }
            printf(" = %.2f %s",CNG,sar);
            //new break BOYS
            break;
            //new case BOYS
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