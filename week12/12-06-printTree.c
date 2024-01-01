#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* define Node, newNode, findNode, printTree here */
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
    if(!tree) return;

    printTree(tree->left);
    printf("%s ", tree -> word);
    printTree(tree->right);
}

#define indexableSize(A) (sizeof(A) / sizeof(*(A)))

int main()
{
    Node *root = 0;

    char *words[] = {
	"Peter", "Piper", "picked", "a", "peck", "of", "picked", "pepper",
	"where", "is", "the", "peck", "that", "Peter", "Piper", "picked",
    };

    for (int i = 0;  i < indexableSize(words);  ++i)
	findNode(&root, words[i]);

    printTree(root);

    return 0;
}
