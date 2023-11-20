#include <stdio.h>
#include <math.h>

struct nameStd{
    char lastName[100][100];
    char firstName[100][100];
};

typedef struct nameStd nameStd;

struct Student{
    nameStd name;
    float cc, kt, thi, gpa;
};

typedef struct Student Student;

void enter(){

}

int main(){
    int n; scanf("%d", &n);
    Student sv[n + 1];
    for(int i = 1; i <= n; i++){
        
    }
}