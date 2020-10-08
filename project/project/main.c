//
//  main.c
//  project
//
//  Created by 이유진 on 2020/10/08.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int factorial(int n)
{
    int i, res=1;
    
    for(i=1; i<=n; i++)
    {
        res = res * i;
    }
        return res;
}

int combination (int n, int r)
{
    int n1, n2, n3;
    
    n1= factorial(n);
    n2= factorial(n-r);
    n3= factorial(r);
    return (n1/n2/n3);
    
}

int get_integer()
{
    int x;
    
    printf("input an integer:");
    scanf("%i", &x);
    
    return x;
}

int main(int argc, const char * argv[]) {
   
    int n, r, result; //변수선언
    
    n = get_integer(); //n 입력
    r = get_integer(); //r 입력
    result = combination(n,r); //combination()
    
    printf("combination result is %i\n", result);
    
    return 0;
}
