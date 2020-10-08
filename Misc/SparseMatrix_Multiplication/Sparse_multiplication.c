

#include <stdio.h>

//Function to print the matrix
void print(int k[3][100], int count)
{
    int i, j;
    //printf("%d",count);
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < count; i++)
        {
            printf("%d ", k[j][i]);
        }
        printf("\n");
    }
    //printf("%d",count);
}


//Simple function to swap two numbers
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


//function to sort a matrix
void sort(int k[3][100], int count)
{
    int i, j;
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {

            if (k[0][j] > k[0][j + 1])
            {
                //Swapping the row,coloumn and data value altogether accordingly in triplet(form)
                swap(&k[0][j], &k[0][j + 1]);
                swap(&k[1][j], &k[1][j + 1]);
                swap(&k[2][j], &k[2][j + 1]);
            }
            else if (k[0][j] == k[0][j + 1])
            {
                if (k[1][j] > k[1][j + 1])
                {
                    swap(&k[0][j], &k[0][j + 1]);
                    swap(&k[1][j], &k[1][j + 1]);
                    swap(&k[2][j], &k[2][j + 1]);
                }
            }
        }
    }
}


//Simple function to transpose a matrix
void transpose(int k[3][100], int count)
{
    int i, j, temp;
    printf("\n");

    for (j = 0; j < count; j++)
    {

        swap(&k[0][j], &k[1][j]);
    }
    sort(k, count);
    //  print(k,count);
}

//Function to multiply two sparse matrix
void multiply(int k[3][100], int count, int r1, int c1)
{
    int b[20][20], l[3][100], i, j, r2, c2, size = 0, kpos, lpos, result[3][100], r, c, tempk, templ, sum, rcount = 0;
    printf("Enter no of rows");
    scanf("%d", &r2);
    printf("Enter no of columns");
    scanf("%d", &c2);

    //forming the triplet for entered sparse matrix
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
            if (b[i][j] != 0)
            {
                l[0][size] = i;
                l[1][size] = j;
                l[2][size] = b[i][j];
                size++;
            }
        }
    }
    if (c1 != r2)
    {
        printf("Not possible");

        return;
    }


    //transpose to avoid loss of value
    transpose(l, size);

    for (kpos = 0; kpos < count;)
    {
        r = k[0][kpos];
        for (lpos = 0; lpos < size;)
        {
            c = l[0][lpos];

            tempk = kpos;
            templ = lpos;

            sum = 0;

            //Allocation of row,column and multiplied value to our resultant triplet
            while (tempk < count && k[0][tempk] == r && templ < size && l[0][templ] == c)
            {

                //if first matrix's triplet has lower value for column
                if (k[1][tempk] < l[1][templ])
                {
                    tempk++;
                }

                //if second matrix's triplet has lower value for column
                else if (l[1][templ] > k[1][tempk])
                {
                    templ++;
                }

                //subcase for equal values of column
                else
                {
                    sum += k[2][tempk++] * l[2][templ++];
                }
            }

            if (sum != 0)
            {
                result[0][rcount] = r;
                result[1][rcount] = c;
                result[2][rcount] = sum;
                rcount++;
            }

            //The following two while loops ensure that none of values of either matrixes remains unassigned or not calculated
            while (lpos < size && l[0][lpos] == c)
            {
                lpos++;
            }
        }
        while (kpos < count && k[0][kpos] == r)
        {
            kpos++;
        }
    }

    print(result, rcount);
}

int main()
{
    int a[20][20], k[3][100], i, j, m, n, count = 0;
    printf("Enter no of rows");
    scanf("%d", &m);
    printf("Enter no of coloumns");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j])
            {
                k[0][count] = i;
                k[1][count] = j;
                k[2][count] = a[i][j];
                count++;
            }
        }
    }

    multiply(k, count, m, n);
}
