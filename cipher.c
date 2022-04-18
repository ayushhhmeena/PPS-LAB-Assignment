#include<stdio.h>
#include<string.h>
int main(){
    // startup message
    printf("\n|----------------------------|\n|   WELCOME TO CIPHER 1.0 !! |\n|     MADE BY AYUSH MEENA    |\n|----------------------------|\n");
    
    //choosing Encryption or Decryption
    printf("\n\nEnter 1 For Encryption \nEnter 2 for Decryption \n");
    int option;
    scanf("%d",&option);

    //for encryption
    if(option==1){
        char Input[100];
        char ch;
        int key,length;

        // taking the input(message) & key
        printf("\nEnter The message you Want To Encrypt.\n");
        scanf("%s",&Input);
        // getline(Input,100);
        printf("\nEnter Key.\n");
        scanf("%d",&key);

        length=strlen(Input);

        for(int i=0;Input[i]!='\0';++i){
            ch=Input[i];
            //encrypt for lowercase letter
            if(ch>='a' && ch<='z'){
                ch=ch+key;
                if(ch>'z') {
                    ch=ch-'z'+'a'-1;
                }
                Input[i]=ch;
            }else if (ch >= 'A' && ch <= 'Z'){
            //encrypt for uppercase letter
                ch=ch+key;
                if(ch>'Z'){
                    ch=ch-'Z'+'A'-1;
                }
                Input[i]=ch;
            }
        }
        printf("Encrypted message: %s", Input);
    }else if(option==2){
        // Decrypting
        char Input[100];
        char ch;
        int key,length;

        // taking the input(message) & key
        printf("\nEnter The message you Want To Decrypt.\n");
        scanf("%s",&Input);
        printf("\nEnter Key.\n");
        scanf("%d",&key);

        length=strlen(Input);

        for(int i=0;Input[i]!='\0';++i){
            ch = Input[i];
            //decrypt for lowercase letter
            if(ch>='a' && ch<='z'){
                ch=ch-key;
                if(ch<'a'){
                    ch=ch+'z'-'a'+1;
                }
            Input[i]=ch;
            }else if(ch>='A' && ch<='Z'){
            //decrypt for uppercase letter
            ch=ch-key;
            if(ch<'A'){
               ch=ch+'Z'-'A'+1;
            }
            Input[i]=ch;
            }
        }
      printf("Decrypted message: %s",Input);
    }else{
        printf("Wrong Input Is Given");
    }

    return 0;
}
