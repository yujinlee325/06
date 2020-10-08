//
//  main.c
//  project
//
//  Created by 이유진 on 2020/10/08.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int square(int a)
{
    return (a*a);
    
}

int main(int argc, const char * argv[]) {
   
    int a = 2;
    
    a=square(a);
    printf("a=%i\n",a);
    
    return 0;
}
