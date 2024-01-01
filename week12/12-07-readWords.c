#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* define Node, newNode, findNode, printTree, getWord here */
typedef struct Node Node;
struct Node
{
    char * word;
    Node * left;
    Node * right;
};

Node *newNode(char * word)
{
    struct Node * new = malloc(sizeof(Node));
    if(new != NULL)
    {
	new -> word = strdup(word);
	new -> left = 0;
	new -> right = 0;
	return new;
    }
    return new;
}

Node *findNode(Node **tree, char *word) {
    Node *root = * tree;
    
    if(root == NULL)
	return *tree = newNode(word);

    if (strcmp(root->word, word) > 0) return findNode(&(root->left), word);
    if(strcmp(root->word, word) < 0) return findNode(&(root->right), word);
    return root;
}

void printTree(Node *tree)
{
    if(!tree) 
	return;

    printTree(tree->left);
    printf("%s ", tree -> word);
    printTree(tree->right);
}

int getword(char *word, int size)
{
    int c;
    int i = 0;
    while((c = getchar()) != EOF && i < size - 1) 
    {
	if(isalpha(c)) word[i++]=c;
	else break;
    }
    if (c == EOF) {
	return -1;
    }
    word[i] = '\0';
    return i;
}

#define indexableSize(A) (sizeof(A) / sizeof(*(A)))

int main()
{
    Node *root = 0;
    char word[64];

    //FILE* f = fopen("IP2-12.txt", "r");
    // do {
    //     if (getword(word, sizeof(word)) > 0) findNode(&root, word);
    // } while (!feof(stdin));
    while (getword(word, sizeof(word)) >= 0) findNode(&root, word);
    printTree(root);

    return 0;
}
