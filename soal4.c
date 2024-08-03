// hasil dari pengurangan dari jumlah diagonal sebuah matrik NxN 
#include <stdio.h>
typedef struct soal3
{
    int data1;
    int data2;
    int hasil;

}DataResult;

DataResult dataHasil(int matrix[][3], int n){
    DataResult result;
    result.data1=0;
    result.data2=0;

    for (int i = 0; i < n; i++)
    {
        result.data1 +=matrix[i][i];
        result.data2 +=matrix[i][n-i-1];
    }
    result.hasil= result.data1-result.data2;
    return result;

}



int main(){
    int matrix[3][3]={
        {1,2,0},
        {4,5,6},
        {7,8,9}
    };
    int n = 3;

    DataResult result = dataHasil(matrix,n);
    printf("Data Diagonal 1 : %d\n", result.data1);
    printf("Data Diagonal 2 : %d\n", result.data2);
    printf("hasil dari  Diagonal 1 = %d - Diagonal 2 =  %d  adalah = %d\n",result.data1,result.data2,result.hasil);


return 0;
}