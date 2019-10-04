using namespace std;
#include <iostream>

#include "constants.hpp"
#include "class/Slider/Slider.hpp"
#include "class/SliderGraph/SliderGraph.hpp"

int main(int argc, char const *argv[])
{
    SliderGraph * a = new SliderGraph("s1.txt");

    cout << a->toString();

    cout << a->DepthSearch();
    
    return 0;
}
