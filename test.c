#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <windows.h>
#include <string.h>
struct peo
{ 
    
    char name[20];
    char tele[12];
    int high;
};
struct stu
{
    char name[20];
    int age;
};
//计算器函数
void calc (int (*p)(int ,int ))
{   
    int x,y;
    printf("输入两个数\n");
    scanf("%d %d",&x,&y);
    int ret=p(x,y);
    printf("%d",ret);
    //return ret;
}
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x,int y)
{
    return x-y;
}
int Mul(int x ,int y)
{
    return x*y;
}
int Div(int x,int y)
{
    return x/y;
}
//阶乘
/* int jie(int x)
{
    if (x == 1)
        return 1;
    else
        return x * jie(x - 1);

} */
/* char* strcpy(char* x, const char* y)
{
    char* tem = x;
    do
    {
        *x = *y;
        x++;
        y++;
    } while (*y != '\0');
    return tem;
} */
/* int my_strlen(const char* x)
{
    int count = 0;
    assert(x);
    while (*x != '\0')
    {
        count++;
        x++;
    }
    return count;

} */
/* void diandao(char* left, char* right)
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
} */
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

/* void move_odd_even(int *arr,int sz)
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

} */
/* void print1(int (*p)[5],int r,int c)
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
} */
/* void Add1(int (*p)(int ,int))
{
    int a=2;
    int b=3;
    int ret=p(a,b);
    printf("%d",ret);

} */


/*  void bubble_sort(void *arr,int sz,int wid,int(*cmp)(const void *e1,const void *e2))
{
    int i=0,j=0;
    int temp=0;
    for(i=0;i<sz-1;i++)
    {
        for(j=0;j<sz-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
} */

int cmp_int(const void* e1,const void* e2)
{
    return (*(int*) e1) - (*(int*)e2);
}

int cmp_stu_name(const void* e1,const void* e2)
{
    return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}

int cmp_stu_age(const void*e1,const void* e2)
{
    return (((struct stu*)e1)->age-((struct stu*)e2)->age);
}


char* my_strcpy(char *arr1,const char* arr2)
{
    assert(arr1 && arr2);
    char* ret=arr1;
    while(*arr2)
    {
        *arr1++=*arr2++;
    }
    return ret;
}


char* my_strstr(const char* str1,const char* str2)
{
    const char* s1=str1;
    const char* s2=str2;
    const char* p=str1;
    while(*p)
    {
        s1=p;
        s2=str2;
        while(*s2!=0 && *s1==*s2)
        {
            s1++;
            s2++;
        }        
        if(*s2==0)
            return (char*) p;
        p++;
    }
    return NULL;

}



int main()
{



//KMP算法
//实现一个字符串中查找字符串

//strerror函数 返回错误码对应的错误信息
    printf("%s\n",strerror(0));
    printf("%s\n",strerror(1));
    printf("%s\n",strerror(2));
    printf("%s\n",strerror(3));
    printf("%s\n",strerror(4));
    FILE* pf=fopen("test.txt","r");
    if(pf==NULL)
    {
        printf("%s\n",strerror(errno));
    }


//strtok函数 找到字符前的所有字符
/*     char arr[]="wudashuaege";
    char *sep="de";
    char cp[30]={0};
    strcpy(cp,arr);
    for(char *ret=strtok(cp,sep);ret!=NULL;ret=strtok(NULL,sep))
    {
        printf("%s ",ret);
    } */
    
//字符串和字符串函数
/*     char* arr="abcde";
    int len =strlen(arr);
    printf("%d\n",len);
    char name[]={0};
    char name1[]={"zhangsan"};
    my_strcpy(name,name1);
    printf("%s\n",name); */
/*     char arr1[20]="asas ";
    char arr2[]="qqqq";
    strncat(arr1,arr2,4);
    printf("%s",arr1); */
/*     char arr1[]="abcdef";
    char arr2[]="abcd";
    int len=strncmp(arr1,arr2,5);
    if(len == 0)
        printf("==\n");
    else if(len<0)
        printf("<\n");
    else
        printf(">\n"); */
//strstr函数
/*     char email[]="abbbbcdef";
    char str[]="b";
    char* ret=my_strstr(email,str);
    if(ret==NULL)
    {
        printf("不存在\n");
    }
    else
        printf("%s",ret); */


//复习试题
/*     char* c[]={"ENTER","NEW","POINT","FIRST"};
    char** cp[]={c+3,c+2,c+1,c};
    char*** cpp=cp;
    printf("%s\n",**++cpp);
    printf("%s\n",*--*++cpp+3);
    printf("%s\n",*cpp[-2]+3);
    printf("%s\n",cpp[-1][-1]+1); */
/*     int a[5][5];
    int (*p)[4];
    p=a;
    printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
 */
/*     int a[3][2]={(0,1),(2,3),(4,5)};
    int* p;
    p=a[0];
    printf("%d",p[0]); */

/*     int a[3][4]={0};
    printf("%d\n",sizeof(a));//48
    printf("%d\n",sizeof(a[0][0]));//4
    printf("%d\n",sizeof(a[0]));//16
    printf("%d\n",sizeof(a[0]+1));//8
    printf("%d\n",sizeof(*(a[0]+1)));//4
    printf("%d\n",sizeof(a+1));//8
    printf("%d\n",sizeof(*(a+1)));//16
    printf("%d\n",sizeof(&a[0]+1));//8
    printf("%d\n",sizeof(*(&a[0]+1)));//16
    printf("%d\n",sizeof(*a));//16
    printf("%d\n",sizeof(a[3]));//16 */
//测试使用qsort来排序结构体数据
/*     int arr[10]={0,9,8,7,6,5,4,3,2,1};
    //int sz=sizeof(arr)/sizeof(arr[0]);
    struct stu s[]={{"zhangsna",25},{"lisi",21},{"wangwu",29},{"xiaoliu",31}};
    int sz=sizeof(s)/sizeof(s[0]);
    //qsort(arr,sz,sizeof(arr[0]),cmp_int);
    qsort(s,sz,sizeof(s[0]),cmp_stu_age);
    for(int i=0;i<sz;i++)
    {
        printf("%d ",(s+i)->age);
    } */




//学习qsort 使用快速排序的思想
/*     int arr[10]={9,8,7,6,5,4,3,2,1,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,sz,sizeof(arr[0]),cmp_int);
    for(int i=0;i<sz;i++)
    {
        printf("%d \n",arr[i]);
    } */



/*     int arr[5]={3,4,5,2,8};
    int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    printf("%d  \n",sz);
    for(int i=0;i<sz;i++)
    {
        printf("%d \n",arr[i]);
    } 
*/


    


//函数指针的用途,回调函数
//和函数指针数组的学习
//计算器    
/*      int x=0;
    int y=0;
    int ret=0;
    int input=0;
//函数指针数组
//转移表
    int (*arr[5])(int ,int )={0, Add,Sub,Mul,Div};
    do
    {
        printf("输入计算方式\n");
        scanf("%d",&input);
        if(input==0)
        {
            printf("退出\n");
        }
        else if(input>=1&&input <=4)
        {
            printf("输入要计算的数\n");
            scanf("%d %d",&x,&y);
            ret=arr[input](x,y);
            printf("%d\n",ret);

        }
        else
        {
            printf("输入错误\n");
        }
    } while (input);
    
    /* int *arr[5]={arr1,arr2,arr3,arr4,arr5};
    int (*arr)[5]=&arr; */
/*     int (*pf[5])(int,int)={0,Add,Sub,Mul,Div};
//指向【函数指针数组】的指针
    int (*(*ppf)[5])(int,int)=&pf; 
*/




    /* do
    {
        printf("选择计算方式\n加法1,减法2,乘法3,除法4\n");
        scanf("%d",&input);
        //ret=add(x,y);
        
        switch(input)
        {
        case 0:
            printf("退出游戏\n");
            break;
        case 1:
            
            calc(Add);
            break;
        case 2:
            calc(Sub);
            break;
        case 3:
            calc(Mul);
            break;
        case 4:
            calc(Div);
            break;
        default:
            printf("输入错误\n");
            break;
        }


    } while (input); 
 */    
    





//函数指针的学习
//函数指针传递，在函数中调用函数
    
    /* //printf("%p ",&Add);
    //printf("%p ",Add);
    int (*pf)(int ,int)=Add;
    //printf("%p",*pf);
    int ret= (*pf)(2,3);
    //int ret=pf(2,3)
    printf("\n");
    //printf("%d",ret);
    Add1(pf);
    (*(void(*)())0)();
    void (*signal(int,void(*)(int)))(int);
 */
    
//数组指针的使用,数组参数和指针参数    
    /* int arr[]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10]=&arr;
    int arr[5]={0};
    int (*p)[5]=&arr;//数组指针
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

