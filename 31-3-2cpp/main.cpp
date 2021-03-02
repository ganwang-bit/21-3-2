//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//#include<cstring>
//using namespace std;
//template<typename T>
//void mysort(T arr[],int len)
//{
//    for(int i=0;i<len-1;i++)
//    {
//        int m=i;
//        for(int j=i+1;j<len;j++)
//        {
//            if(arr[j]<arr[m])
//                m=j;
//        }
//        T tmp=arr[i];
//        arr[i]=arr[m];
//        arr[m]=tmp;
//    }
//}
//int main()
//{
//    char arr[]="gbfcdsa";
//    int a[]={9,8,7,6,5,4,3};
//    mysort(arr,strlen(arr));
//    mysort(a,sizeof(a)/sizeof(int));
//    cout<<arr<<endl;
//    for(int i=0;i<sizeof(a)/sizeof(int);i++)
//    {
//        cout<<a[i];
//    }
//    return 0;
//}
//#include<iostream>
//using namespace std;
//template<typename T>
//T add(T a,T b)
//{
//    return a+b;
//}
//int main()
//{
//    int a=10;
//    char c='c';
//    cout<<add<int>(a,c)<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//void func()
//{
//    cout<<"func()"<<endl;
//}
//template <typename T>
//void func()
//{
//    cout<<"template func()"<<endl;
//}
//int main()
//{
//    func<int>();
//    func();
//    return 0;
//}
