#include<bits/stdc++.h>
using namespace std;
void setmatrixzeros(int matrix[3][3])
{
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(matrix[i][j]==0)
        {
            matrix[i][j]=-1;
        }
    }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(matrix[i][j]==-1)
        {
           for(int k=0;k<3;k++)
           {
            matrix[i][k]=0;
           }
           for(int m=0;m<3;m++)
           {
            matrix[m][j]=0;
           }
        }
    }
}
}
void setmatrxzerosbetter(int matrix[3][3])
{
int rowarr[3]={0,0,0};
int colarr[3]={0,0,0};
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(matrix[i][j] == 0)
        {
            rowarr[i]=1;
            colarr[j]=1;
        }
    }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
{
    if(rowarr[i] == 1 || colarr[j] == 1)

    {
        matrix[i][j]=0;
    }
}
}

}
void setmatrxzerosopt(int matrix[3][3])
{
int col0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(i==0||j==0)
        {
            col0=matrix[i][j];
        }
        else if (matrix[i][j] == 0)
        {
            matrix[i][j]=1;
            matrix[j][i]=1;
        }
    }
}


}
int main()
{

    int  matrix[3][3]={
        {1,0,1},
        {1,1,1},
        {1,1,0}
    };
   // setmatrixzeros(matrix);
   // setmatrxzerosbetter(matrix);
     setmatrxzerosopt(matrix);
    for(int i=0;i<3;i++)
{cout<<endl;
    for(int j=0;j<3;j++)
    {
        cout<<matrix[i][j]<<",";
    }
    }

    return 0;
}