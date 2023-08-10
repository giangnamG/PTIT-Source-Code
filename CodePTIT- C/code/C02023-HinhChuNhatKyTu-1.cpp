#include <stdio.h>

int main()
{
    int rows, cols;
    scanf("%d%d", &rows, &cols);
    char c = 'a';
    for (int i = 1; i <= rows; i++)
    {
        if(rows <= cols)
        {
            if (i==1)
                for (int j = 1; j <= cols; j++)
                    printf("%c", c+cols-1);
            else{
                char tmp;
                for (int j = 1; j <= i; j++){
                    printf("%c", c+cols-j);
                    tmp = c+cols-j; 
                }
                for (int j = i+1; j <= cols; j++)
                    printf("%c", tmp);
            }
        }else{
            if (i==1)
                for (int j = 1; j <= cols; j++)
                    printf("%c", c+rows-1);
            else{
                if(i <= cols)
                {
                    char tmp;
                    for (int j = 1; j <= i; j++){
                        printf("%c", c+rows-j);
                        tmp = c+rows-j; 
                    }
                    for (int j = i+1; j <= cols; j++)
                        printf("%c", tmp);
                }else{
                    for (int j = 1; j <= cols; j++){
                        printf("%c", c+rows-j);
                    }
                }
            } 
        }
        printf("\n");
    }
}