// 3. exercise of round 2
// Short program explanation

#include<iostream>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::min;

// function calls algorithm's "min()" function to solve smallest number of given x and y
int user_min(int x, int y){
    
    // temp variable to hold the smallest number 
    int min_num;

    // calling of "algorithm" library's min(int x, int y)
    // it calculates smallest number of two given whole numbers
    // function's return placed to "min_num" variable
    min_num = min(x, y);

    // returns the "min_num" variable
    return min_num;
}

// function calls "user_min(x, y)" function until 
// smallest number of given x, y and z has been solved
int user_min(int x, int y, int z){

    
    int min_num, 
    // before calling first time: 
    // x = 1, y = 2, z = 3
    
    xy_min, yz_min, zx_min, 
    // after first round: 
    // xy = 1, yz = 2, zx = 1

    xy_yz_min, yz_zx_min, zx_xy_min;
    // after second round: 
    // xy_yz = 1, yz_zx = 1, zx_xy = 1

    // first round
    xy_min = user_min(x, y);
    yz_min = user_min(y, z);
    zx_min = user_min(z, x);

    // second round
    xy_yz_min = user_min(xy_min, yz_min);
    yz_zx_min = user_min(yz_min, zx_min);
    zx_xy_min = user_min(zx_min, xy_min);

    // if each variable has the smallest of xyz
    if (xy_yz_min == yz_zx_min && zx_xy_min == xy_yz_min)
    {
        // set the "min_num" variable to xyz_min
        min_num = xy_yz_min;
    }
    // if not print out error message
    else
    {
        cout << "\nThe numbers are not the same!!\n";
    }
    
    // and return the "min_num"
    return min_num;
}

// function calls "user_min(x, y)" function until 
// smallest number of given x, y, z and 2 has been solved
int user_min(int x, int y, int z, int w){
    
    int min_num, 
    // before calling first time: 
    // x = 1, y = 2, z = 3, w = 4

    xy_min, yz_min, zw_min, wx_min,
    // after first round: 
    // xy = 1, yz = 2, zw = 3, wx = 1

    xy_yz_min, yz_zw_min, zw_wx_min, wx_xy_min,
    // after second round:  
    // xy_yz = 1, yz_zx = 2, zw_wx = 1, wx_xy = 1

    xyz_yzw_min, yzw_zwx_min, zwx_wxy_min, wxy_xyz_min;
    // after third round: 
    // xyz_yzw = 1, yzw_zwx = 1, zwx_wxy = 1, wxy_xyz = 1

    // first round: 
    xy_min = user_min(x, y);
    yz_min = user_min(y, z);
    zw_min = user_min(z, w);
    wx_min = user_min(w, x);

    // second round: 
    xy_yz_min = user_min(xy_min, yz_min);
    yz_zw_min = user_min(yz_min, zw_min);
    zw_wx_min = user_min(zw_min, wx_min);
    wx_xy_min = user_min(wx_min, xy_min);

    // third round: 
    xyz_yzw_min = user_min(xy_yz_min, yz_zw_min);
    yzw_zwx_min = user_min(yz_zw_min, zw_wx_min);
    zwx_wxy_min = user_min(zw_wx_min, wx_xy_min);
    wxy_xyz_min = user_min(wx_xy_min, xy_yz_min);

    // if each variable has the smallest of xyzw
    if (xyz_yzw_min == yzw_zwx_min && zwx_wxy_min == wxy_xyz_min && wxy_xyz_min == xyz_yzw_min)
    {   
        // set the "min_num" variable to xyzw_min
        min_num = xyz_yzw_min;
    }
    // if not print out error message
    else
    {
        cout << "\nThe numbers are not the same!!\n";
    }

    // and return the "min_num"
    return min_num;
}

int main() {
    
    // setting xyzw values
    int min_num, num_x = 42, num_y = 26, num_z = 89, num_w = 33;

    // calling first function to solve smallest of x and y
    min_num = user_min(num_x, num_y);

    // print out given x, y and the solved number
    cout << "\nSmallest number of " << num_x << " and " << num_y << " is " << min_num << endl;

    // calling second function to solve smallest of x, y and z
    min_num = user_min(num_x, num_y, num_z);

    // print out given x, y, z and the solved number
    cout << "\nSmallest number of " << num_x << ", " << num_y << " and " << num_z << " is " << min_num << endl;

    // calling third function to solve smallest of x, y, z and w
    min_num = user_min(num_x, num_y, num_z, num_w);

    // print out given x, y, z, w and the solved number
    cout << "\nSmallest number of " << num_x << ", " << num_y << ", " << num_z << " and " << num_w << " is " << min_num << endl;
    
    return 0;
}