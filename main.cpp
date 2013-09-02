#include <stdio.h>
#include <iostream>
#include "lib/ball.h"		// 引入 class, 無法作為 public var 宣告, 因為會在 cpp 再引入一次造成錯誤
#include "static_var.h"		// 單純用來做變數宣告, 不需要 cpp 部分

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	ball b;					// 直接宣告
	ball *c=new ball();		// 使用指標

	a=123;

	cout << a << endl;

	cout << b.run(55) << endl;
	cout << c->run(99) << endl;

	return 0;
}

/*
	編譯指令( 有class 的 cpp file 要一併 Compile, Static Header 則不用 )：
		g++ .\main.cpp .\lib\ball.cpp ; ./a.exe
*/