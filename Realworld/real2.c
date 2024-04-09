#include "real.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
    struct phone Phone[10];
    
    phone_specs(Phone);

    output_specs(Phone);
    
    return 0;
}
