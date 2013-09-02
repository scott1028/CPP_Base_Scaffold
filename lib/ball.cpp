#include "ball.h"
#include <iostream>

using namespace std;

ball::ball(){
	cout << "build!" << endl;
}

int ball::run(int a){
	return a+100;
}