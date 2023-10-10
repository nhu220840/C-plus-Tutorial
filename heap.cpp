#include <stdio.h>
#include <math.h>

int main(){
    int i, n;
    int A[10];
    int tong = 0;
    printf("nhap vao so phan tu cua day: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("moi ban nhap phan tu thu %d: ", i);
        scanf("%d", &A[i]);
    }
    int max = A[0];
    int countPositive = 0, countNegative = 0;

    printf("day so vua nhap la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);

        if(A[i] > max){
            max = A[i];
        }

        if(A[i] < 0) countNegative++;
        else countPositive++;
        tong += A[i];
    }
    float tbc = (float)tong / n;
    printf("\ntong cua day so vua nhap la: %d", tong);
    printf("\ntrung binh cong cua day so vua nhap la %f", tbc);
    printf("\nSo lon nhat trong day la: %d", max);
    printf("\nSo luong so nguyen duong cua day la: %d", countPositive);
    printf("\nSo luong so nguyen am cua day la: %d", countNegative);

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(A[j] > A[j + 1]){
                int tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }

    printf("\nDay so sau khi sap xep tang dan la: ");
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    
}