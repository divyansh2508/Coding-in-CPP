#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class rect{
    int x, y, x2, y2;
    int l, b;
    int area;

    public:

    //constructor of class
    rect(int xi, int yi, int li, int bi){
        x = xi;
        y = yi;
        l = li;
        b = bi;
    }

    //isOverlapping fucntion
    static bool isOverlapping(rect rect1, rect rect2){

    //finding bottom right coordinates of first rectangle
    rect1.x2 = rect1.x + rect1.l;
    rect1.y2 = rect1.y - rect1.b;

    //finding bottom right coordinates of second rectangle
    rect2.x2 = rect2.x + rect2.l;
    rect2.y2 = rect2.y - rect2.b;

    //calculating area
    rect1.area = rect1.l * rect1.b;
    rect2.area = rect2.l * rect2.b;

    //if area = 0, no overlap
    if (rect1.area == 0 || rect2.area == 0)
        return false;

    //If one rectangle is on left side of other
    if (rect1.x2 < rect2.x || rect2.x2 < rect1.x)
        return false;

    //If one rectangle is above other
    if (rect1.x < rect2.y2 || rect2.x < rect2.y2)
        return false;

    //None fulfilled
    return true;
    }
};


int main(){
    bool ans;
    //(x,y) of top left coordinate and length, breadth in that order
    rect rect1(1,1,1,1);
    rect rect2(6,6,6,6);
    ans = rect::isOverlapping(rect1, rect2);
    if (ans)
        printf("\nRectangles are overlapping");
    else
        printf("\nRectangles aren't overlapping");
}
