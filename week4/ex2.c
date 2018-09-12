//
// Created by Daria Miklashevskaya on 12/09/2018.
//

#include <stdio.h>
#include <unistd.h>

int main(){

    int i;
    for (i=0; i<3; i++){
        fork();
        sleep(5);

    }
    return 0;

}


//Results: Three nested levels for 3 fork calls, 2^3 = 8 processes are created

//for 5 forks: 5 nested levels because each time doubles on each level=> 2^5 = 32

//|   |-+= 30383 dariamiklashevskaya ./ex2
//|   | |-+- 30384 dariamiklashevskaya ./ex2
//|   | | |-+- 30385 dariamiklashevskaya ./ex2
//|   | | | |-+- 30391 dariamiklashevskaya ./ex2
//|   | | | | |-+- 30398 dariamiklashevskaya ./ex2
//|   | | | | | \--- 30417 dariamiklashevskaya ./ex2
//|   | | | | \--- 30410 dariamiklashevskaya ./ex2
//|   | | | |-+- 30401 dariamiklashevskaya ./ex2
//|   | | | | \--- 30418 dariamiklashevskaya ./ex2
//|   | | | \--- 30412 dariamiklashevskaya ./ex2
//|   | | |-+- 30390 dariamiklashevskaya ./ex2
//|   | | | |-+- 30397 dariamiklashevskaya ./ex2
//|   | | | | \--- 30415 dariamiklashevskaya ./ex2
//|   | | | \--- 30413 dariamiklashevskaya ./ex2
//|   | | |-+- 30396 dariamiklashevskaya ./ex2
//|   | | | \--- 30411 dariamiklashevskaya ./ex2
//|   | | \--- 30408 dariamiklashevskaya ./ex2
//|   | |-+- 30386 dariamiklashevskaya ./ex2
//|   | | |-+- 30392 dariamiklashevskaya ./ex2
//|   | | | |-+- 30400 dariamiklashevskaya ./ex2
//|   | | | | \--- 30419 dariamiklashevskaya ./ex2
//|   | | | \--- 30416 dariamiklashevskaya ./ex2
//|   | | |-+- 30399 dariamiklashevskaya ./ex2
//|   | | | \--- 30414 dariamiklashevskaya ./ex2
//|   | | \--- 30409 dariamiklashevskaya ./ex2
//|   | |-+- 30393 dariamiklashevskaya ./ex2
//|   | | |-+- 30402 dariamiklashevskaya ./ex2
//|   | | | \--- 30420 dariamiklashevskaya ./ex2
//|   | | \--- 30421 dariamiklashevskaya ./ex2
//|   | |-+- 30403 dariamiklashevskaya ./ex2
//|   | | \--- 30422 dariamiklashevskaya ./ex2
//|   | \--- 30423 dariamiklashevskaya ./ex2
//|   \-+= 30424 dariamiklashevskaya pstree