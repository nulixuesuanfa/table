#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;
class Table {

public:
  Table(int a1=1, int a2=1)
        : h(a1)
        , l(a2)
    {content="*";}

  void set(int a1,int a2,string s){
  	h=a1;l=a2;content=s;
  }
   void set(int a1,int a2,int s){
  	h=a1;l=a2;
  	stringstream ss;
  ss<<s; 
  content=ss.str();
  }
  void show(){for(int i=0;i<h;i++){
  for(int j=0;j<l;j++)cout<<content;printf("\n");}
  }

  void addRow(){h+=1;
  };

  void delRow(int n){h-=n;
  }

  void addColumn(){l+=1;
  }

  void delColumn(int n){l-=n;
  }

private:

  int h;
  int l;
  string content;
};


int main() {

  Table tb;

  tb.show();

  tb.addRow();

  tb.show();

  tb.addColumn();

  tb.show();

  Table tb1(5,5);

  tb1.show();

  tb1.set(1,1,30);

  tb1.set(2,2,"hello");

  tb1.show();

  tb1.delRow(1);

  tb1.show();

  tb1.delColumn(1);

  tb1.show();

  return 0;

}
