#include <iostream>
#include <map>
float add(float x, float y)
{
    return x + y;
}
float sub(float x, float y)
{
    return x - y;
}
float mul(float x, float y)
{
    return x * y;
}
float div(float x, float y)
{
    if (y != 0)
    {
        return x / y;
    }
    throw "error";
}
int main()
{
    float a, b;
    char op;
    std::cin >> a >> op >> b;
    std::map<char, float (*)(float, float)> funcs;
    funcs['+'] = &add;
    funcs['-'] = &sub;
    funcs['*'] = &mul;
    funcs['/'] = &div;
    std::cout << funcs[op](a, b) << std::endl;
    return 0;
}