#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* define Node, newNode here */
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

int main()
{
    struct Node *l    = newNode("left");
    struct Node *r    = newNode("right");
    struct Node *root = newNode("root");
    root->left  = l;
    root->right = r;

    printf("%s\n", root->left->word);
    printf("%s\n", root->right->word);
    printf("%s\n", root->word);

    return 0;
}
