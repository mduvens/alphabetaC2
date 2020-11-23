#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

#define LENGTH 100
#define MAXSIZE 1000

void fileToString(char* nomeF,char* texto){
        FILE *ponteiroF;
        char linha[LENGTH];

        ponteiroF = fopen(nomeF,"r");
        if (ponteiroF){
            while (fgets(linha,MAXSIZE,ponteiroF) != NULL){
                strcat(texto,linha);
            };
            printf("\n");
        }
        fclose(ponteiroF);
        printf("arvore %s: %s",nomeF,texto);
}

void stringToFile(char* string, char* nomeF){
    FILE *ponteiroF;
    ponteiroF = fopen(nomeF,"w");
    if(ponteiroF == NULL){
        printf("Erro no ficheiro %s",nomeF);
        return;
    }
    fprintf(ponteiroF,"%s",string);
    fclose(ponteiroF);
    return;
}

void treeToStringPreOrder(node* root, char* string){
    if (root == NULL) return;

    char tmp[5] = "";
    sprintf(tmp,"%d",root->data);
    strcat(string,tmp);

    if (!root->left && !root->right) return;

    if (root->left){
        strcat(string,"(");
        treeToString(root->left,string);
        strcat(string,")");
    }
  
    if (root->right){
        strcat(string,"(");
        treeToString(root->right,string);
        strcat(string,")");
    }
}
#endif