#include "task1.h"
#include <iostream>
int getRecommendation(char gender, float height, float weight)
{
    // ����� ����������
    if (gender == 'm') {
    //�����
        if (weight > height - 100) {
            std::cout << "Hudei!:\n";
            return 1;
        }
        else {
            std::cout << "Tolstei!:\n";
            return -1;
        }
    }
    else {
    //����
        if (weight > height - 110) {
            std::cout << "Hudei!:\n";
            return 1;
        }
        else {
            std::cout << "Tolstei!:\n";
            return -1;
        }
    }
    return 0; //��� �������
};