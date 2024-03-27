#include <iostream>

using namespace std;

/**
 * @brief 输出转义序列
 * 
 */
void printZyxl()
{
    cout << "换行符：" << '\n' << endl;
    cout << "纵向制表符" << '\v' << endl;
    cout << "反斜线：" << '\\' << endl;
    cout << "回车符：" << '\r' << endl;
    cout << "横向制表符：" << '\t' << endl;
    cout << "退格符：" << '\b' << endl;
    cout << "问号：" << '\?' << endl;
    cout << "进纸符：" << '\f' << endl;
    cout << "报警（响铃）符：" << '\a' << endl;
    cout << "双引号：" << '\"' << endl;
    cout << "单引号：" << '\'' << endl;
}



int main() 
{
    printZyxl();
    return 0;    
}
