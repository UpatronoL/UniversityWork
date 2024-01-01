#include <stdio.h>

#define ROTATION_POINT_CAPITAL 'Z' - 15
#define ROTATION_POINT_SMALL 'z' - 15
#define CAPITAL_LATTERS 'A' ... 'Z'
#define SMALL_LATTERS 'a' ... 'z'

char *rot13(char *s) {
    char *index = s;
    while (*index != '\0') {
        switch (*index) {
            case CAPITAL_LATTERS:
                if (*index > ROTATION_POINT_CAPITAL)
                    *index = 'A' + (15 - ('Z' - *index)) - 1;
                else
                    *index += 15;
                break;
            case SMALL_LATTERS:
                if (*index > ROTATION_POINT_SMALL)
                    *index = 'a' + (15 - ('z' - *index)) - 1;
                else
                    *index += 15;
                break;
            default:
                break;
        }
        index++;
    }
    return s;
}


int main()
{
    // char s[] =
	// "Fvzcyvpvgl naq ryrtnapr ner hacbchyne orpnhfr gurl erdhver uneq jbex naq "
	// "qvfpvcyvar gb npuvrir naq rqhpngvba gb or nccerpvngrq. -- Rqftre Qvwxfgen";
    char * s = "a";
    printf("%s\n", rot13(s)); 
    return 0;
}
