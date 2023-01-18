#include <iostream>
using namespace std;

int main()
{
	
 int a;
 int b;
 int c;
 
 cout << "первое число" << endl;
 cin >> a;
 cout << "второе число" << endl;
 cin >> b;
 cout << "действие 1+ 2- 3* 4/" << endl;
 cin >> c;
 
 switch(c)
 {
 	case 1:
 	   { int d = a + b;
 	    cout << "сумма чисел:" << d << endl;
 	   break;
 	    }
 	case 2:
 	    { int d = a - b;
 	    cout << "а минус б" << d << endl;
 	    break;
 	    }
 	case 3:
 	    { int d = a * b;
 	    cout << "произведение" << d << endl;
 	    break;
 	    }
   case 4:
 	    { int d = a / b;
 	    cout << "деление" << d << endl;
 	    break;
 	    }
 	default:
 	    {cout << "вы долбоеб" << endl;
       break;
       }
 }
} 
