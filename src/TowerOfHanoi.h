//
// Created by diana on 17/12/2020.
//

#ifndef EXAMENL_DIANAFALLAS_TOWEROFHANOI_H
#define EXAMENL_DIANAFALLAS_TOWEROFHANOI_H

#include<iostream>
#include<sstream>

using namespace std;

class TowerOfHanoi {
private:
    int height = 0;
    int movements = 0;

public:
    TowerOfHanoi() = default;

    TowerOfHanoi(int height);

    void setHeight(int height);

    int getHeight();

    int calculateMovements();

    string toString();

    ~TowerOfHanoi() = default;

};

#endif //EXAMENL_DIANAFALLAS_TOWEROFHANOI_H
