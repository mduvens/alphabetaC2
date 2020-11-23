#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "tree.h"
#include "conversions.h"

#define STRINGSIZE 50

node* stringToTree(char* string, node* root){   // *****   IMCOMPLETO   *****
    char tmp[10]= "";
    char tmp2[20]= "";

    int i = 0;
    if (!(int)strlen(string)) return NULL;
    else{
        // printf("tmp %s\n\n",tmp);
        while(string[i] != '\0'){
            if (string[i] == '('){

            }
            while(string[i]>= '0' && string[i]<='9'){
            sprintf(tmp2,"%c",string[i]);
            strcat(tmp,tmp2);
            i++;
        }
            i++;
        }
        root = insert(root, atoi(tmp));
        root = insert(root, 5);
    }
    return root;
}
int main() {
    node* rootP = NULL;
    char stringTree[STRINGSIZE] = "";

    //rootP = insert(rootP,15);  
    //rootP = insert(rootP,7);  
    //rootP = insert(rootP,18); 
    //rootP = insert(rootP,21);  

    fileToString("tree.txt",stringTree);
    stringToFile(stringTree,"test.txt");
    //rootP = stringToTree(stringTree,rootP);
    //printf("root %d\n", rootP->data);

    //printf("preorder: %s\n",stringTree);
    

    return 0;
}