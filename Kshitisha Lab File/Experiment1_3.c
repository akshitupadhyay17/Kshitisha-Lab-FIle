//Kshitisha Negi
//500107178

#include<stdio.h>
#include<string.h>

int main(){

    char arr[100], word[100];

    printf("Enter string:");
    scanf("%[^\n]%*c", arr);

    printf("Enter the word you want to find:");
    scanf("%s", &word);

    int count=0;
    int found=0;
    
    for(int i=0; i<strlen(arr); i++){
        for(int j=0; j<strlen(word); j++){
            if(arr[i+j]!=word[j]){
                break;
            }
            else{
                if(arr[strlen(word)]==' '){
                    count+=1;
                }
                else{
                    count-=1;
                }
            }
        }
        if(count==strlen(word)){
            found=1;
        }
        else{
            continue;
        }
        count=0;
    }

    if(found>0){
        printf("The Sub string is found in string");
    }

    else{
        printf("The Sub string is not found in string");
    }
}