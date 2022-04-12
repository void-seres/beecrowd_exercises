#include <stdio.h>

int VerificaC(int *v);
int VerificaD(int *v);

int main()
{
    int i, v[5];

    for(i = 0; i < 5; i++)
        scanf("%d%*c", &v[i]);

    if(VerificaC(v))
        printf("C\n");

    else if(VerificaD(v))
        printf("D\n");

    else
        printf("N\n");

    return 0;
}

int VerificaC(int *v)
{
    int i, flag;

    for(i = 0; i < 4; i++)
    {
        if (v[i] <= v[i + 1])
            flag = 1;

        else
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int VerificaD(int *v)
{
    int i, flag;

    for(i = 0; i < 4; i++)
    {
        if (v[i] >= v[i + 1])
            flag = 1;

        else
        {
            flag = 0;
            break;
        }
    }
    
    return flag;
}
