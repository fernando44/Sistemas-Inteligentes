#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int w[5];
    w[0]=2;
    w[1]=3;
    w[2]=3;
    w[3]=5;
    w[4]=2;
    w[5]=4;
    
    int t[2];
    t[0]=1;
    t[1]=6;
    t[2]=5;

    int S1[4], S2[4], S3[4];
    int O1[4], O2[4], O3[4];

    int I1[4], I2[4];

    for (int j = 0; j < 4; j++)
    {
        printf("\n\nlinha: %i", j);
        printf("\nValor I1:");
        scanf("%i", &I1[j]);

        printf("\nValor I2:");
        scanf("%i", &I2[j]);
    }
    
    for (int i = 0; i < 4; i++)
    {
        S1[i] = ( I1[i] * w[0] ) + ( I2[i] * w[1]);
        printf("\nS1: %i", S1[i]);
        if(S1[i] > t[0]){
            O1[i]=1;
        }
        else{
            O1[i]=0;
        }
        printf("\nO1: %i", O1[i]);

        //calculo O2
        S2[i] = ( I1[i] * w[2] ) + ( I2[i] * w[3]);
        printf("\nS2: %i", S2[i]);
        if(S2[i] > t[1]){
            O2[i]=0;
        }
        else{
            O2[i]=1;
        }
        printf("\nO2: %i", O2[i]);

        //calculo O3
        S3[i] = ( O1[i] * w[4] ) + ( O2[i] * w[5]);
        printf("\nS3: %i", S3[i]);
        if(S3[i] > t[2]){
            O3[i]=1;
        }
        else{
            O3[i]=0;
        }
        printf("\nO3: %i", O3[i]);


        printf("\n\n\n");
        printf("I1 | I2 | Soma1 | O1 | Soma2 | O2 | Soma3 | O3");

        for (int i = 0; i < 4; i++)
        {
            printf("\n%i  | %i  | %i     | %i  | %i     | %i  | %i     | %i ", I1[i], I2[i], S1[i], O1[i], S2[i], O2[i], S3[i], O3[i]);
        }
        
        
    }
    
    return 0;
}
