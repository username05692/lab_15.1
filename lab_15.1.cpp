#include <stdio.h>

int main() {
    int nom1, nom2; //���������� ������
    // �������� �������
    printf("VVedit nom1:"); 
    scanf_s("%d", &nom1);
    
    printf("VVedit nom2:");
    scanf_s("%d", &nom2);
    // �������� �����
    if (nom1 > nom2) {
        printf("%d\n",nom1);
    }
    else{
        printf("%d , %d\n",nom1,nom2);
    }
    return 0;
}

