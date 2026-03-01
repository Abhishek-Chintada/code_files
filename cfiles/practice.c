#include <stdio.h>

int main()
{
    char sym[100];
    while(scanf("%s", sym)!=EOF)
    {
        int total_ones = 0, total_zeros = 0;
        char *Elements[30] = {"H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", 
                             "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar", 
                             "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", 
                             "Co", "Ni", "Cu", "Zn"};
        char *ptr = &sym;
        while(*ptr!='\0')
        {
            for(int i=0;i<30;i++)
            {
                if(*ptr==Elements[i][0])
                {
                    if(Elements[i][1] == '\0')
                    {
                        for(int j=0;j<8;j++)
                        {
                            if((((int8_t)(*ptr))>>j)&1) total_ones++;
                            else total_zeros++;
                        }
                        ptr++;
                    }
                    else if(Elements[i][1]!='\0')
                    {
                        if(*(ptr+1) == Elements[i][1])
                        {
                            for(int j=0;j<2;j++)
                            {
                                for(int k=0;k<8;k++)
                                {
                                    if((((int8_t)(*(ptr+j)))>>k)&1) total_ones++;
                                    else total_zeros++;
                                }
                            }
                            ptr = ptr+2;
                        }
                    }
                }
            }
        }
        printf("Total 1's: %d, Total 0's: %d\n", total_ones, total_zeros);
    }
}