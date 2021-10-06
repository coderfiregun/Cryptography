#include<iostream>
#include<cstring>
using namespace std;

int mI(int a,int m){
    for(int x=1;x<m;++x){
        if(( (a%m) * (x%m) )%m == 1) return x;
    }
    return m+1;
}

inline void Encrypt(){
    char message[100];

    printf("Enter Message  to Encrypt : ");
    cin.ignore();
    scanf("%[^\n]",message);
    int key;
    printf("Enter Key : ");
    scanf("%d",&key);

    int len = strlen(message);

    for(int i=0;i<len;++i){
        if((message[i]>='A' && message[i]<='Z')) 
            message[i] = char(( (message[i]-'A')  * (key) )%26 + 'A');
        else  if((message[i]>='a' && message[i]<='z')) 
            message[i] = char(( (message[i]-'a')  * (key) )%26 + 'a');
    }

    printf("%s",message);

}

inline void Decrypt(){
    char message[100];
    printf("Enter Message to Decrypt : ");
    cin.ignore();
    scanf("%[^\n]",message);
    int key;
    printf("Enter Key : ");
    scanf("%d",&key);

    int len = strlen(message);

    for(int i=0;i<len;++i){
        if((message[i]>='A' && message[i]<='Z')) 
            message[i] = char(( (message[i]-'A') * mI(key,26) )%26 + 'A');
        else  if((message[i]>='a' && message[i]<='z')) 
            message[i] = char(( (message[i]-'a') * mI(key,26) )%26 + 'a');
    }

    printf("%s",message);
}

int main(){
    int tc;
    printf("Enter No Of test Cases : ");
    scanf("%d",&tc);
    while(tc--){
        printf("1)Encyption\n2)Decryption \n ");
        printf("Your choice : ");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1 : Encrypt();
                break;
            case 2 : Decrypt();
                break;
            default: printf("Next Time Enter a Valid choice \n");
        }
        printf("\n");
    }
   
    return 0;
}