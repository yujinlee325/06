//
//  main.c
//  project
//
//  Created by 이유진 on 2020/10/08.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int starPrint()
{
    int i;
    for (i=0; i<10; i++)
        printf("*");
    
    return 0;
    
}

int main(int argc, const char * argv[]) {
   
    starPrint();
    starPrint();
    starPrint();
    
    return 0;
}
