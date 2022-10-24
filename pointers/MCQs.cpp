int first = 8;
int second = 18;
int *ptr = &second;
    *ptr = 9;
cout << first << "  " << second << endl;
    ans: 8  9

                   
      int first = 6;
      int *p = &first;
      int *q = p;
      (*q)++;
      cout << first << endl;
      ans:7



 int first =8;
 int* p=&first;
 cout<< (*p)++<< " "<< first;
      ans: 8   9


        
 int *p=0;
 int first=110;
 *p=first;
 cout<<*p<< endl;
 ans: segmentation fault 


  int first = 8;
  int second = 11;
  int* third = &second;
  first = *third;
  *third =  *third + 2;
  cout << first << " " <<second << endl;
  ans: 11 13



  float f = 12.5;
  float p = 21.5;
  float *ptr = &f;
  (*ptr)++;
  *ptr = p;
  cout << *ptr << " " << f <<" "<<  p << endl;
  ans: 21.5 21.5 21.5





  int arr[5];
  int *ptr;
  cout << sizeof (arr) << " " << sizeof (ptr);
  ans: 20 8



int arr[]={11, 12, 13, 14, 15};
cout<< *(arr)<< " "<< *(arr+3);
ans:11 14


int arr[6] = { 11, 21, 13 };
int *p = arr;
cout << p[2] << endl;
ans: 13


  int arr[] = { 11, 21, 13, 41 };
  int *ptr = arr++;  //you can’t update an array.
  cout << *ptr << endl;


  char ch = 'a';
  char *ptr = &ch;
  ch++;
  cout << *ptr << endl;
  ans: b






  char arr[]=" abcde";
  char *ptr= &arr[0];
  cout << ptr<< endl;
  ans: abcde


  char str[] = "sagar ";
  char *p = str;
  cout << str[0] << "   " << p[0] << endl;
  ans: s   s 





void update (int *p)
{
  *p = (*p) * 2;
}

int main ()
{
  int i = 10;
  update (&i);
  cout << i << endl;
  ans: 20.



    
    
 void fun (int arr[])
{
  cout << arr[0] << endl;
}

int main ()
{
  int arr[] = { 11, 12, 13, 14 };
  fun (arr + 1);
  cout << arr[0] << endl;
  ans: 12
       11




void sqr(int* p){
    int a=70;
    p=&a;
    *p=(*p) *(*p);
}
int main()
{
    int a =70;
    sqr(&a);
    cout<< a<<endl;
 ans: 70.




   int  first=100;
   int *p= &first;
   int  **q=&p;
   int second= (**q)++ +9;
   cout<< first <<" "<<  second<< endl;
   ans: 101 109




  int first = 100;
  int *p = &first;
  int **q = &p;
  int second = ++(**q);
  int *r = *q;
  ++(*r);
  cout << first << "  " << second << endl;
  ans: 102 101


    int arr[] = {41, 52, 36, 74};
    int *p = (arr + 1);
    cout << *arr + 8;
    ans: 49



  char *p;
  char str[] = "pqrstuv";
  p = str;
  p += 3;
  cout << p;
  ans: stuv



  char arr[20];
  int i;
  for (i = 0; i < 10; i++)
    {
      *(arr + i) = 65 + i;  //ascii value 
    }
  *(arr + i) = '\0';
  cout << arr;
  ans: ABCDEFGHIJ



  float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout << *ptr2 << " ";
  cout << ptr2 - ptr1;
  ans: 90.5   3 




  char st[] = "ABCD";
  for (int i = 0; st[i] != '\0'; i++)
    {
      cout << st[i] << endl;            // A B C D
     cout << *(st) + i << endl;      //65 66 67 68
      cout << *(i + st) << endl;    //A B C D
      cout << i[st];                        // ABCD





void Q (int z)
{
  z += z;  //z+z=z =14
  cout << z << " ";
}

void P (int *y)
{
  int x = *y + 2; // 5+2
  Q (x);
  *y = x - 1;     //7-1
  cout << x << " ";
}

int
main ()
{
  int x = 5;
  P (&x);
  cout << x;
ans: 14 7 6 




int ***r, **q, *p, i=8;
        p = &i;
        (*p)++;
        q = &p;
        (**q)++;
        r = &q;
        cout<<*p << " " <<**q << " "<<***r;
ans: 10 10 10



int f(int x, int *py, int **ppz) {
        int y, z;
        **ppz += 1;
        z = **ppz;
        *py += 2;
       y = *py;
        x += 3;
        return x+y+z;
    }
int main ()
{
    int c, *b, **a;
        c = 4;
        b = &c;
        a = &b;
        cout << f(c, b, a);
ans: 19
