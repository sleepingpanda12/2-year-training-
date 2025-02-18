#include<string.h>
#include<stdio.h>
int main(){
 char rev[20],str[20];
 int length,j=0;
 printf("Enter a string: \n");
 scanf("%s",str);
 printf("string is: %s\n",str);
 length=strlen(str);
 j=length-1; // Start from last character
 for(int i=0;i<length;i++){ // Fixed loop condition
    rev[i]=str[j];
    j--;
 }
 rev[length] = '\0'; // Null-terminate
 printf("Reversed string is: %s \n",rev);

}