#include <stdio.h>
#include <stdlib.h>

typedef double Vec3[3];
typedef double Mat3[3][3];
void Vec3_print(Vec3 V);
void Mat3_mulVec3(Mat3 M, Vec3 V, Vec3 P);
void Mat3_mulMat3(Mat3 A, Mat3 B, Mat3 P);

int main(int argc, char **artgv)
{
    Vec3 V = {3, 4, 1};
    Vec3 SV, TV, TSV;
    Mat3 T = { {1, 0, 5}, {0, 1, 7}, {0, 0, 1} };
    Mat3 S = { {3, 0, 0}, {0, 2, 0}, {0, 0, 1} };
    Mat3 TS;
    Vec3_print(V);
    Mat3_mulVec3(S, V, SV);
    Vec3_print(SV);
    Mat3_mulVec3(T, V, TV);
    Vec3_print(TV);
    Mat3_mulMat3(T, S, TS);
    Mat3_mulVec3(TS, V, TSV);
    Vec3_print(TSV);
    return 0;
}

void Vec3_print(Vec3 V)
{
    printf("{ ");
    for(int i = 0; i < 2; i++)
	printf("%.6f, ", V[i]);
    printf("%.6f ", V[2]);
    printf("}\n");
}

void Mat3_mulVec3(Mat3 M, Vec3 V, Vec3 P)
{
    for (int i = 0; i < 3; i++) 
    {
	P[i] = 0;
        for (int j = 0; j < 3; j++) 
            P[i] += M[i][j] * V[j];
    }
}

void Mat3_mulMat3(Mat3 A, Mat3 B, Mat3 P)
{
    for(int i = 0; i < 3; i++)
	for(int j = 0; j < 3; j++)
	{
	    P[i][j] = 0;
	    for(int k = 0; k < 3; k++)
		P[i][j] += A[i][k] * B[k][j];    
        }
}
