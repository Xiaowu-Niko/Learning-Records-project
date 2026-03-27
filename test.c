#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <windows.h>
struct peo
{
    char name[20];
    char tele[12];
    int high;
};
int add(int x, int y)
{
    return x + y;
}
int jie(int x)
{
    if (x == 1)
        return 1;
    else
        return x * jie(x - 1);

}
char* strcpy(char* x, const char* y)
{
    char* tem = x;
    do
    {
        *x = *y;
        x++;
        y++;
    } while (*y != '\0');
    return tem;
}
int my_strlen(const char* x)
{
    int count = 0;
    assert(x);
    while (*x != '\0')
    {
        count++;
        x++;
    }
    return count;

}
void diandao(char* left, char* right)
{
    char tem = 0;

    while (left < right)
    {

        tem = *left;
        *left = *right;
        *right = tem;
        left++;
        right--;
    }
}
//int pow(int x, int y)
//{
//    int a = x;
//    for (int i = 1; i < y; i++)
//    {
//        x *= a;
//    }
//        
//        return x;
//}

void move_odd_even(int *arr,int sz)
{
    //int arr2[sz-1];
    int* left=arr;
    int* right=arr+sz-1;
    int n=0;
    int j=0;
    while(left<right)
    {
        while((left<right) && *left%2==1)
        {
            left++;
        }
        while((left<right) && *right%2==0)
        {
            right--;
        }
        if(left<right)
        {
            int tep=*left;
            *left=*right;
            *right=tep;
            left++;
            right--;
        }
    }

}
void print1(int (*p)[5],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            //printf("%d ",*(*(P+i)+j));
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
}

int main()
{



//数组指针的使用

    int arr[3][5]={1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
    print1(arr,3,5);

    /* int arr[]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10]=&arr;

    int sz=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sz;i++)
    {
        printf("%d ",*(*p+i)); 
    } */





    //指针数组模拟二维数组
    /* int arr1[5]={1,2,3,4,5};
    int arr2[5]={2,3,4,5,6};
    int arr3[5]={3,4,5,6,7};

    int* parr[3]={arr1,arr2,arr3};
    int i=0;
    int j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {

            printf("%d",parr[i][j]);
        }
        printf("\n");
    } */


    //两个有序排列数合并一个有序排列
    /* int n,m;
    scanf("%d %d",&n,&m);
    int narr[n];
    int marr[m];
    for(int l=0;l<n;l++)
    {
        scanf("%d",&narr[l]);
    }
    for(int o;o<m;o++)
    {
        scanf("%d",&marr[o]);
    }
    int i=0;
    int j=0;
    
    while(i<n&&j<m)
    {
        if( narr[i]<marr[j])
        {           
            printf("%d ",narr[i]);
            i++;
        }
        else
        {           
            printf("%d ",marr[j]);
            j++;
        }
    }
    if(i<n)
    {
        for(;i<n;i++)
        {
            printf("%d",narr[i]);
        }
    }
    else
    {
        for(;j<m;j++)
        {
            printf("%d",marr[j]);
        }
    } */
     
    /* //一个数组，前半部分是奇数，后半是偶数
    //输入
    int arr[10]={0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<10;i++)
    {
        scanf("%d",arr+i);
    }
    //调整
    move_odd_even(arr,sz);
    //输出
    for(int i=0;i<10;i++)
    {
        printf("%d",*(arr+i));
    } */




    /*char ch[100] = {0};
    gets(ch);
    int n = strlen(ch);
    diandao(ch, ch + n-1);
    char* start = ch;
    char* end = start;
    while (*start)
    {
        while (*end != ' '&&*end!='\0')
        {
            end++;
        }
        diandao(start, end - 1);
        end++;
        start = end;
    }*/


    /*char* left = ch;
    char* right = ch[n-1];

    char tem = 0;
    while (left < right)
    {
        tem = *left;
        *left = *right;
        *right = tem;
        left++;
        right--;
    }*/
    //printf("%s", ch);






//两个数的最小公倍数
    /*int n, m;
    scanf("%d%d", &n, &m);
    int i = 1;
    while ((n * i)%m)
    {
        i++;
    }
    printf("%d", n * i);*/




    //喝饮料两块一瓶，两个瓶盖换一瓶
        //int n = 0;
        //int sum = 0;
        //int count = 0;
        //int kong;
        //scanf("%d", &n);
        //count = n;
        //kong = n;
        //while (kong >= 2)
        //{
        //    count += kong / 2;
        //    kong = kong / 2 + kong % 2;
        //}
        //printf("%d", count);











    //打印菱形
        /*int i = 0;
        int j = 0;
        int k = 0;
        int n = 0;
        int m = 0;
        int a;
        scanf("%d", &a);
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a - i - 1; j++)
            {
                printf(" ");
            }
            for (j = 0; j < 2*i+1 ; j++)
            {
                printf("*");
            }printf("\n");
        }
        for (i = 0; i < a - 1; i++)
        {
            for (j = 0; j < i+1; j++)
            {
                printf(" ");
            }
            for (k = 0; k < 2*(a-1 - i) - 1; k++)
            {
                printf("*");
            }printf("\n");
        }*/







        //0-100000的水仙花数
            //int count = 0;
            //int sum = 0;
            //for (int i = 0; i <= 100000; i++)
            //{
            //    sum = 0;
            //    int n = 1;
            //    int k = i;
            //    while (k / 10)
            //    {
            //        n++;
            //        k /= 10;
            //    }
            //    k = i;
            //    while (k)
            //    {
            //        
            //        
            //        sum += pow(k%10, n);
            //        k /= 10;
            //    }
            //    if (sum == i)
            //    {
            //        printf("%d ", i);
            //    }
            //}











        //倒换字符串
            //int arr[6] = { 1,2,3,4,5,6 };
            //char ch[10001] = { 0 };
            ////while (scanf("%s", ch) != EOF) {};
            ////gets(ch);
            ////int sz = strlen(ch);
            //int n = 0;
            //int a = 0;
            //scanf("%d %d", &a, & n);
            //int sum = 0;
            //int k = 0;
            //for (int i = 0; i < n; i++)
            //{
            //    k = k * 10 + a;
            //    sum += k;
            //}
            //printf("%d", sum);
            //
            //printf("%\s",diandao(ch,sz));








                 /*   char ch;
                //////scanf("%c",&ch);
                while((scanf("%c",&ch))==1)
                {
                    if((ch>='a' && ch<='z')||(ch>='A' &&ch<='Z'))
                    printf("%c is  an\n",ch);
                    else
                    printf("%c is not an\n",ch);
                    getchar();
                }

                int arr[5]={0};
                int* p=arr;
                for(p=arr;p<&arr[5];)
                {
                    *p++=1;
                }
                for(int i=0;i<5;i++)
                {
                    printf("%d",arr[i]);
                }printf("\n");

                struct peo p1={"wu","123232",159};
                struct peo *d;
                d=&p1;

                int n;
                scanf("%d",&n);
                char arr[n][n]={' '};
                int i=0;
              int j=n;
            */

            //const int sum = 10;
            //int* p = &sum;
            //*p = 11;
            ///*sum = 11;*/
            //printf("%d\n", sum);
            //char arr1[20] = "ssdscsdc";
            //char arr2[] = "123456";
            //printf("%s",strcpy(arr1, arr2));


            /*    int n=-1;
                int count=0;
                printf("%s ",d->name);
                while(n)
                {
                    n&=n-1;
                    count++;
                }
                printf("%d",count);
                0
            */

    return 0;

}

