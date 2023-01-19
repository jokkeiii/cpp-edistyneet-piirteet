// 1. exercise of round 2
// Short program explanation

#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

// hold triangle type names
enum Triangle { RIGHT_ANGLED, EQUILATERAL, ISOSCELES, SCALENE };

// function checks if given inputs can be a triangle
bool isTriangle(float a_side, float b_side, float c_side, Triangle &triangle_type){
    
    // variable to store if given inputs can be a triangle
    bool is_triangle;
    // varaibles for each sum of two sides
    float ab = a_side + b_side, 
    bc = b_side + c_side, 
    ca = c_side + a_side;
    // variable to hold
    float hypotenuse, pythagorean;

    // if any of the sides is zero
    if (a_side == 0 || b_side == 0 || c_side == 0)
    {
        // returns false
        is_triangle = false;
    }
    // if any 2 sides sum is smaller than the third side
    else if (ab < c_side || bc < a_side || ca < b_side)
    {
        // is not triangle
        is_triangle = false;
    }
    // if here it is a triangle
    else
    {   
        is_triangle = true;
    }
    
    // if it is triangle, check what type the triangle is
    if (is_triangle)
    {   
        // find which of the three sides is the hypotenuse(longest side)
        if (a_side > b_side && a_side > c_side)
        {
            hypotenuse = pow(a_side, 2);
            pythagorean = (pow(b_side, 2) + pow(c_side, 2));
        }
        else if (b_side > a_side && b_side > c_side)
        {
            hypotenuse = pow(b_side, 2);
            pythagorean = (pow(c_side, 2) + pow(a_side, 2));
        }
        else
        {
            hypotenuse = pow(c_side, 2);
            pythagorean = (pow(a_side, 2) + pow(b_side, 2));
        }
        
        // when hypotenuse is know
        // check is the triangle right angled
        if (pythagorean == hypotenuse)
        {
            triangle_type = RIGHT_ANGLED;
        }
        // or equilateral
        else if (a_side == b_side && b_side == c_side)
        {
            triangle_type = EQUILATERAL;
        }
        // or isosceles
        else if (a_side == b_side || b_side == c_side)
        {
            triangle_type = ISOSCELES;
        }
        // if none of the above it's scalene
        else
        {
            triangle_type = SCALENE;
        }
        // now the triangle type is known and the function can exit
    }
    
    // if is_triangle is true
    if (is_triangle)
    {
        return true;
    }
    // if it's false
    else
    {
        return false;
    }
    
    
}


int main() {
    
    // variables to hold inputs
    float a_side, b_side, c_side;
    // variable to hold true or false if it is triangle or not
    bool is_triangle = false;
    
    // 
    Triangle triangle_type;

    cout << "Input first side length: ";
    cin >> a_side;

    cout << "Input second side length: ";
    cin >> b_side;

    cout << "Input third side length: ";
    cin >> c_side;
    
    is_triangle = isTriangle(a_side, b_side, c_side, triangle_type);

    // print correct output
    if (is_triangle)
    {   
        cout << "\nThat is a triangle!";
        
        // with the triangle type output
        if (triangle_type == RIGHT_ANGLED)
        {
            cout << "\nAnd from these inputs you can make a right angled triangle";
        }
        else if (triangle_type == EQUILATERAL)
        {
            cout << "\nAnd from these inputs you can make an equilateral triangle";
        }
        else if (triangle_type == ISOSCELES)
        {
            cout << "\nAnd from these inputs you can make an isosceles triangle";
        }
        else
        {
            cout << "\nAnd from these inputs you can make an scalene triangle";
        }
        
    }
    else
    {
        cout << "\nThat is NOT a triangle!";
    }
    
    return 0;
}