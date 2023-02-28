#include<stdio.h>
#include<string.h>
void tree(void){
    int i=1;
    for (i;i<=5;i++){
        if (i==1){
            printf("\n%10s", "*");
            
        }
        else if(i==2){
            printf("\n%11s","***");
            
        }
        else if (i==3){ 
            printf("\n%13s","********");
            
        }
    
        else if (i==4){
            printf("\n%15s","***********");
            
        }

        else {
            printf("\n%11s","|||");
        }
    }
}

int main(){
    tree();
}