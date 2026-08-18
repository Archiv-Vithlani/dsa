//Design an anagram game using an array. Allow a user to enter N words and store them in an array. Generate a random number between 
//0 and N-1. Based on the randomly generated number, display the word stored at that array index and allow the user to enter its anagram. 
//[Given a word A and word B, B is said to be an anagram of A if and only if the characters present in B are the same as the characters 
//Check whether the user-entered word is an anagram of the displayed word, and print an appropriate message. 
//present in A, irrespective of their sequence. For ex: "DUSTY" == "STUDY"]
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int n;
    printf("Enter no. of words u will input : ");
    scanf("%d",&n);
    char words[n][20];
    printf("Enter words :\n");
    for(int i=0;i<n;i++){
        scanf("%s",&words[i]);
    }
    srand (time(NULL));
    int num =(rand() % n);
    printf("Your word is : %s",words[num]);
    char uip[20];
    printf("\nEnter its Anagram!!\n--> ");
    scanf("%s",&uip);
    printf("Your input was : %s\n",uip);
    if(strlen(uip)==strlen(words[num])){
        for(int i=0;i<strlen(uip);i++){
            for(int j=0;j<strlen(words[num]);j++){
                if(words[num][i]==uip[j]){
                    uip[j]='0';
                    break;
                }
            }
        }
        int flag=0;
        for(int i=0;i<strlen(uip);i++){
            if(uip[i]!='0')
                flag++;
        }
        // printf("%s",uip);
        if(flag==0)
        printf("Which is correct :) ");
        else
        printf("Which is Incorrect!!");
    }
    else{
        printf("Which is Incorrect!!");
    }
    
    // dustyt studyt
    return 0;
}
