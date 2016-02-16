#include <cstdlib>
#include <stdio.h>
#include <iostream> 
#include <math.h>
struct Vektor
    {
        float x;
        float y;
        float z;
    };

Vektor GetVektor()
{
    Vektor TL;
    printf("input X: ");
    scanf("%f", &TL.x);
    printf("input Y: ");
    scanf("%f", &TL.y);
    printf("input Z: ");
    scanf( "%f", &TL.z);
    
    return TL;
}

Vektor ShowVektor(Vektor TL)
{
    printf("%f\n",TL.x);
    printf("%f\n",TL.y);
    printf("%f\n",TL.z);
    return TL;
}
float LenVektor(Vektor TL)
{
    float F;
    float x=TL.x;
    float y=TL.y;
    float z=TL.z;
    F=sqrt(x*x+y*y+z*z);
    //printf("Hellow\n");
    return F;
}
Vektor SumVektor(Vektor TL, Vektor TS)
{
    Vektor PL;
    PL.x=TL.x+TS.x;
    PL.y=TL.y+TS.y;
    PL.z=TL.z+TS.z;
    printf("Sum raeady\n");
    return PL;
}


int main(int argc, char** argv) {
   //Vektor TL;
   //Vektor TS;
   //Vektor PL;
    int ii;
    
   while(1>0)
   {
       
       printf("press 1 to Summa\n");
       printf("press 2 to Create\n");
       printf("press 3 to Length\n");
       printf("press 4 to quit\n");
       
       printf("Ok\n");
       scanf("%d", &ii);
       printf("eto ii---> %d\n", ii);
       switch (ii)
       {
           case 1:
               printf("Summa\n");
               Vektor TV1;
               printf("Vektor 1\n");
               TV1 = GetVektor();
               Vektor TV2;
               printf("Vektor 2 \n");
               TV2 = GetVektor();
               Vektor PL;
               PL = SumVektor(TV1,TV2);
               PL = ShowVektor(PL);
               
               break;
           case 2:
               printf("Create\n");
               Vektor TL;
               printf("Enter Vektor\n");
               TL = GetVektor();
               TL = ShowVektor(TL);
               break;
           case 3:
               printf ("Length\n");
               Vektor TH; 
               printf(" Enter Vektor ");
               TH = GetVektor();
               float h;
                h = LenVektor(TH);
               printf("%f\n" , h);
               break;
           case 4:
               printf("end");
                exit(0);
               break;
           default:
               printf("default");
               exit(0);
               
                   
       }
   }    
    return 0;
   
}
