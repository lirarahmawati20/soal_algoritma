#include <stdio.h>
#include <conio.h>
#include <string.h>

int data(char *str){
    int leng = 0;
        while (str[leng] != '\0')
        {
            leng++;
        }
    return leng;
}


void alphabet(char *str){
    int leng = data(str);
    int i= 0,b = leng - 1;
    while (i < b)
    {
            while(i<b && !((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))){
            i++;
        }
        while (i < b && !((str[b]>='a' && str[b] <='z')|| (str[b]>='A' && str[b]<='Z'))){
            b--;
        }
        if (i < b){
            char tamp = str[i];
            str[i] = str[b];
            str[b] = tamp;
            i++;
            b--;
       }
    
    }
    
    
}
    int main(){
        char str[100];
        printf("Masukan Data : ");
        gets(str);
        int leng = data(str);
            if(leng >0 && str[leng-1]=='\n'){
                str [leng-1]='\0';
            }
        alphabet(str);
        printf("hasil reverse alphabet adalah : %s\n",str);
        return 0;

    }



