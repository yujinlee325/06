//
//  main.c
//  project
//
//  Created by 이유진 on 2020/10/08.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int sumTwo(int a, int b)
{
    return (a+b);
}

int Square(int n)
{
    return(n*n);
    
}

int get_max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main(int argc, const char * argv[]) {
   
    printf("sumTwo : %i\n", sumTwo(1,2));
    printf("Square : %i\n", Square(5));
    printf("get_max: %i\n", get_max(10,30));
    
    return 0;
}
